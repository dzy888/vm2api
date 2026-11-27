// 00363570 <<alloc[12e961f32105355]::collections::vec_deque::VecDeque<_,_>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop::Dropper<bytes[e9829e187354639b]::bytes::Bytes>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<alloc[12e961f32105355]::collections::vec_deque::VecDeque<_,
   _> as 
   core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop::Dropper<bytes[e9829e187354639b]::bytes::Bytes>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<alloc[12e961f32105355]::collections::vec_deque::VecDeque<_,_>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop::Dropper<bytes[e9829e187354639b]::bytes::Bytes>>
          (longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  param_1 = param_1 + 0x18;
  for (param_2 = param_2 + 1; param_2 != 1; param_2 = param_2 + -1) {
    plVar1 = (longlong *)(param_1 + -0x18);
    puVar2 = (undefined8 *)(param_1 + -8);
    param_1 = param_1 + 0x20;
    (**(code **)(*plVar1 + 0x20))(param_4,*puVar2);
  }
  return;
}


