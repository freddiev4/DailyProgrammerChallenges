%Author: Evilk9 (github.com/evilk9)

fprintf('Newtons Second Law Of Motion Calculator\n'); 
fprintf('What do you need to calculate?'); 
decision = input('\n (1)Force \n (2) Mass \n (3) Acceleration: '); 

if(decision == 1)
    mass = input('Enter Mass(kg): '); 
    acceleration = input('Enter Acceleration(m/s^2): ');
    
    force = mass * acceleration; 
    fprintf('The Force is: %d N', force); 
end

if(decision ==2)
    force = input('Enter Force(N): '); 
    acceleration = input('Enter Acceleration(m/s^2): ');
    mass = force/acceleration; 
    fprintf('The Mass is: %d Kg', mass); 
end

if(decision ==3)
    force = input('Enter Force(N): ');
    mass = input('Enter Mass(kg): ');
    acceleration = force/mass; 
    fprintf('The Acceleration is: %d m/s^2', acceleration); 
end

    
    

