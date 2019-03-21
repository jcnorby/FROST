function saveResults(trialName, nlp, gait, sol, info, bounds,results, anim)

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
cloud_path = 'C:\Users\Joe Desktop\Box\Robomechanics Lab Shared Files\Minitaur Opt\';
if exist(cloud_path, 'dir')
    reply = input(['Save everything to Box? y/n: '],'s');
    if strcmp(reply, 'y')
        myVideoBox = VideoWriter([cloud_path,'FROST Videos\', trialName], 'MPEG-4');
        open(myVideoBox);
        writeVideo(myVideoBox,anim.anim.M);
        close(myVideoBox);
        
        save([cloud_path,'FROST Gaits\', trialName, '.mat'],'nlp','gait','sol','info','bounds', 'results')
        exportTrajectory(mergeGait(gait), [cloud_path, 'Minitaur Code\'], ['minitaurCode_', trialName]);
        disp('Saved to Box');
    end
end