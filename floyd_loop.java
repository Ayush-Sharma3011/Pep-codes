/*
floyd loop detection
part 1-> detect if a loop exists
    fast and slow pointer approach
        init fast and slow pinter to head
        move slow by 1 step and fast by 2 step 
        if fast and slow becomes equal loop exits
    
part 2-> find the starting node of the loop
    init slow pointer to head and keep fast pointer at meeting point
    move both pointers by 1 step
    when they meet again, that is the starting node of the loop

part 3-> if loop exits, remove the loop
    init slow pointer to head and keep fast pointer at meeting point
    move both pointers by 1 step
    when they meet again, that is the starting node of the loop
    keep moving fast pointer until fast.next != slow
    set fast.next = null to remove the loop

*/
