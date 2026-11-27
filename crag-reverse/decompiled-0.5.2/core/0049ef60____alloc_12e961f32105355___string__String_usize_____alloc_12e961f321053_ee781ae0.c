// 0049ef60 <(alloc[12e961f32105355]::string::String,usize),<[(alloc[12e961f32105355]::string::String,usize)]>::sort_by_key<core[c0acaeba6ab4c2e0]::cmp::Reverse<usize>,craggemini_core[66f3c71560d70857]::resume::trim_anchors::{closure#0}>::{closure#0}>

/* core[c0acaeba6ab4c2e0]::slice::sort::shared::pivot::median3_rec::<(alloc[12e961f32105355]::string::String,
   usize), <[(alloc[12e961f32105355]::string::String,
   usize)]>::sort_by_key<core[c0acaeba6ab4c2e0]::cmp::Reverse<usize>,
   craggemini_core[66f3c71560d70857]::resume::trim_anchors::{closure#0}>::{closure#0}> */

longlong __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::shared::pivot::median3_rec::
<(alloc[12e961f32105355]::string::String,usize),<[(alloc[12e961f32105355]::string::String,usize)]>::sort_by_key<core[c0acaeba6ab4c2e0]::cmp::Reverse<usize>,craggemini_core[66f3c71560d70857]::resume::trim_anchors::_closure_0_>::_closure_0_>
          (longlong param_1,longlong param_2,longlong param_3,ulonglong param_4,undefined8 param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((param_4 & 0x1ffffffffffffff8) != 0) {
    param_4 = param_4 >> 3;
    lVar3 = param_4 * 0x80;
    lVar4 = param_4 * 0xe0;
    param_1 = <(alloc[12e961f32105355]::string::String,usize),<[(alloc[12e961f32105355]::string::String,usize)]>::sort_by_key<core[c0acaeba6ab4c2e0]::cmp::Reverse<usize>,craggemini_core[66f3c71560d70857]::resume::trim_anchors::_closure_0_>::_closure_0_>
                        (param_1,param_1 + lVar3,param_1 + lVar4);
    param_2 = <(alloc[12e961f32105355]::string::String,usize),<[(alloc[12e961f32105355]::string::String,usize)]>::sort_by_key<core[c0acaeba6ab4c2e0]::cmp::Reverse<usize>,craggemini_core[66f3c71560d70857]::resume::trim_anchors::_closure_0_>::_closure_0_>
                        (param_2,param_2 + lVar3,param_2 + lVar4,param_4,param_5);
    param_3 = <(alloc[12e961f32105355]::string::String,usize),<[(alloc[12e961f32105355]::string::String,usize)]>::sort_by_key<core[c0acaeba6ab4c2e0]::cmp::Reverse<usize>,craggemini_core[66f3c71560d70857]::resume::trim_anchors::_closure_0_>::_closure_0_>
                        (param_3,lVar3 + param_3,lVar4 + param_3,param_4,param_5);
  }
  uVar1 = *(ulonglong *)(param_1 + 0x18);
  uVar2 = *(ulonglong *)(param_2 + 0x18);
  if (*(ulonglong *)(param_3 + 0x18) < uVar2 != uVar2 < uVar1) {
    param_2 = param_3;
  }
  if (*(ulonglong *)(param_3 + 0x18) < uVar1 != uVar2 < uVar1) {
    param_2 = param_1;
  }
  return param_2;
}


