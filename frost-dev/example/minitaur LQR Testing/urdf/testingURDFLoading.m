fid = fopen('minitaurWithTail.urdf','r');
i = 1;
tline = fgetl(fid);
A{i} = tline;
while ischar(tline)
    i = i+1;
    tline = fgetl(fid);
    A{i} = tline;
%     if i == 568
%         nbytes = fprintf(fid, '<mass value="%3.2f"/>', 0.25);
%     end
end
fclose(fid);

A{568} = '      <mass value="0.25"/>';

fid = fopen('minitaurWithTailVariableMass.urdf', 'w');
for i = 1:numel(A)
    if A{i+1} == -1
        fprintf(fid,'%s', A{i});
        break
    else
        fprintf(fid,'%s\n', A{i});
    end
end

type('minitaurWithTailVariableMass.urdf')
