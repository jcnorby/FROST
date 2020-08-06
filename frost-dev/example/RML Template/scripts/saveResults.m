function saveResults(trialName, nlp, gait, sol, info, bounds,results, anim)
% Function to save the results of a trajectory optimization solve both
% locally and to the cloud. Will prompt the user if they would like to save
% TO information locally (nlp, gait, sol, info, bounds, results), then the
% video locally (must have been played in the GUI to actually allow the
% data to be saved in anim), then save everything to the cloud (must
% specify a valid cloud path and subdirs, see comments below for details).
% JN 8/6/2020 - jnorby@andrew.cmu.edu

% Save most recent gait (always do this)
save('local/current_gait.mat','nlp','gait','sol','info','bounds', 'results');

% If gait was good and trialName is accurate, save the gait locally with
% the naming convention in trialName
reply = input(['Save as trial name ', trialName, '? y/n: '],'s');
if strcmp(reply, 'y')
    save(['local/', trialName,'.mat'],'nlp','gait','sol','info','bounds', 'results')
    disp('Saved');
end

% Prompt user to save the video of the gait locally as an AVI - note that
% for all video saves, the data in anim.anim.M isn't populated until the
% video has played
reply = input(['Save video locally? Don''t forget to play video first. y/n: '],'s');
if strcmp(reply, 'y')
    myVideo = VideoWriter(['videos/', trialName]);
    open(myVideo);
    writeVideo(myVideo,anim.anim.M);
    close(myVideo);
    
    disp('Saved locally');
end

% Prompt user if the gait, video, and corresponding minitaur code should be
% saved to Box (or whatever folder is specified in cloud_path)
cloud_path = 'C:\Users\Joe Desktop\Box\Robomechanics Lab Shared Files\Projects\Legged Controls\Spirit\';
if exist(cloud_path, 'dir')
    
    reply = input(['Save everything to the cloud? y/n: '],'s');
    if strcmp(reply, 'y')
        
        if ~exist([cloud_path,'FROST Videos\'], 'dir')
            error('Need to have FROST Videos/ as a subdir of cloud_path');
        end
        
        myVideoBox = VideoWriter([cloud_path,'FROST Videos\', trialName], 'MPEG-4');
        open(myVideoBox);
        writeVideo(myVideoBox,anim.anim.M);
        close(myVideoBox);
        
        if ~exist([cloud_path,'FROST Gaits\'], 'dir')
            error('Need to have FROST Gaits/ as a subdir of cloud_path');
        end
        save([cloud_path,'FROST Gaits\', trialName, '.mat'],'nlp','gait','sol','info','bounds', 'results')
        % % Uncomment this to save the trajectory as minitaur code
        % exportTrajectory(mergeGait(gait), [cloud_path, 'Minitaur Code\'], ['minitaurCode_', trialName], trialName);
        disp('Saved to cloud');
    end
else 
    disp('Couldn''t find cloud path, no cloud save (probably need to update the cloud_path string in this file to a valid directory')
end