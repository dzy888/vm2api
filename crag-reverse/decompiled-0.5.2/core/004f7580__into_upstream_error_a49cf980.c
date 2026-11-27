// 004f7580 into_upstream_error

/* <craggemini_core[66f3c71560d70857]::protocol::SseFrameKind>::into_upstream_error */

longlong * __rustcall
<craggemini_core[66f3c71560d70857]::protocol::SseFrameKind>::into_upstream_error
          (longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *param_2;
  if (lVar1 == 2) {
    lVar1 = param_2[1];
    lVar2 = param_2[2];
    lVar3 = param_2[4];
    param_1[2] = param_2[3];
    param_1[3] = lVar3;
    *param_1 = lVar1;
    param_1[1] = lVar2;
  }
  else {
    *(undefined1 *)param_1 = 0xff;
    if (((lVar1 != 0) && (lVar1 = param_2[1], lVar1 != -1)) && (lVar1 != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(lVar1,1);
      return param_1;
    }
  }
  return param_1;
}


