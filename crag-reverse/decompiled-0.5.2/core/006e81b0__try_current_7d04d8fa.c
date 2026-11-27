// 006e81b0 try_current

/* <tokio[d7d91d38da47d894]::runtime::handle::Handle>::try_current */

undefined8 * __rustcall
<tokio[d7d91d38da47d894]::runtime::handle::Handle>::try_current(undefined8 *param_1)

{
  ulonglong *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  undefined8 uVar7;
  longlong *in_FS_OFFSET;
  
  lVar2 = *in_FS_OFFSET;
  puVar1 = (ulonglong *)(lVar2 + -0x138);
  if (*(char *)(lVar2 + -0xf0) == '\0') {
    uVar3 = *puVar1;
joined_r0x006e8271:
    if (uVar3 < 0x7fffffffffffffff) {
      *puVar1 = uVar3 + 1;
      lVar4 = *(longlong *)(lVar2 + -0x130);
      if (lVar4 != 2) {
        plVar5 = *(longlong **)(lVar2 + -0x128);
        uVar7 = 1;
        LOCK();
        lVar2 = *plVar5;
        *plVar5 = *plVar5 + 1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          if (lVar2 < 0) {
LAB_006e828d:
                    /* WARNING: Does not return */
            pcVar6 = (code *)invalidInstructionException();
            (*pcVar6)();
          }
        }
        else {
          if (lVar2 < 0) goto LAB_006e828d;
          uVar7 = 0;
        }
        *puVar1 = *puVar1 - 1;
        *param_1 = uVar7;
        param_1[1] = plVar5;
        return param_1;
      }
      *puVar1 = uVar3;
      *(undefined1 *)(param_1 + 1) = 0;
      goto LAB_006e81fd;
    }
    (*(code *)PTR_panic_already_mutably_borrowed_00799db0)();
  }
  else if (*(char *)(lVar2 + -0xf0) == '\x01') {
    (*(code *)PTR_register_00799240)();
    *(undefined1 *)(lVar2 + -0xf0) = 0;
    uVar3 = *puVar1;
    goto joined_r0x006e8271;
  }
  *(undefined1 *)(param_1 + 1) = 1;
LAB_006e81fd:
  *param_1 = 2;
  return param_1;
}


