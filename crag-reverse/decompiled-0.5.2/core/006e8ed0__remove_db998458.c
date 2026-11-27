// 006e8ed0 remove

/* <tokio[d7d91d38da47d894]::util::linked_list::LinkedList<tokio[d7d91d38da47d894]::runtime::time::entry::TimerShared>>::remove
   <tokio[d7d91d38da47d894]::util::linked_list::LinkedList<tokio[d7d91d38da47d894]::sync::notify::Waiter>>::remove
   <tokio[d7d91d38da47d894]::util::linked_list::LinkedList<tokio[d7d91d38da47d894]::runtime::io::scheduled_io::Waiter>>::remove
    */

longlong * __rustcall
<tokio[d7d91d38da47d894]::util::linked_list::LinkedList<tokio[d7d91d38da47d894]::runtime::time::entry::TimerShared>>
::remove(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  
  if (*param_2 == 0) {
    if ((longlong *)*param_1 != param_2) {
      return (longlong *)0x0;
    }
    plVar1 = (longlong *)param_2[1];
    *param_1 = plVar1;
  }
  else {
    plVar1 = (longlong *)param_2[1];
    *(longlong **)(*param_2 + 8) = plVar1;
  }
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = *param_2;
    *param_2 = 0;
    param_2[1] = 0;
    return param_2;
  }
  if ((longlong *)param_1[1] == param_2) {
    param_1[1] = *param_2;
    *param_2 = 0;
    param_2[1] = 0;
    return param_2;
  }
  return (longlong *)0x0;
}


