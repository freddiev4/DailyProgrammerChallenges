#Description

Now that we have the basic, let's review something else [Elementary cellular automaton](https://en.wikipedia.org/wiki/Elementary_cellular_automaton)

I could explain it, but over at [Wolfram](http://mathworld.wolfram.com/ElementaryCellularAutomaton.html) they do a pretty decent job.

#Formal Inputs &amp; Outputs

All tapes have 1 active cell at the center

##Input description

As input you recieve 3 values: 

 - the size of the tape/array
 - the number of rows to output
 - the number of the rule


###Example 1

    43 40 2

###Example 2

    43 17 90

##Output description


###Example 1

                         *                     
                        *                      
                       *                       
                      *                        
                     *                         
                    *                          
                   *                           
                  *                            
                 *                             
                *                              
               *                               
              *                                
             *                                 
            *                                  
           *                                   
          *                                    
         *                                     
        *                                      
       *                                       
      *                                        
     *                                         
    *                                          
                                              *
                                             * 
                                            *  
                                           *   
                                          *    
                                         *     
                                        *      
                                       *       
                                      *        
                                     *         
                                    *          
                                   *           
                                  *            
                                 *             
                                *              
                               *               
                              *                
                             *                 


###Example 2

                            *                         
                           * *                        
                          *   *                       
                         * * * *                      
                        *       *                     
                       * *     * *                    
                      *   *   *   *                   
                     * * * * * * * *                  
                    *               *                 
                   * *             * *                
                  *   *           *   *               
                 * * * *         * * * *              
                *       *       *       *             
               * *     * *     * *     * *            
              *   *   *   *   *   *   *   *           
             * * * * * * * * * * * * * * * *          



#Bonus

Add 2 rules by a logic opperator (and, or, nor, nand, xor, xnor).

For this you keep both outputs in memory and only the output goes trough the logic comparison for output.

Examples will be added later

#Notes/Hints

I know this has been done before and this isn't very new... but it will all come together at the last challenge this week. 

#Finally

Have a good challenge idea?

Consider submitting it to /r/dailyprogrammer_ideas