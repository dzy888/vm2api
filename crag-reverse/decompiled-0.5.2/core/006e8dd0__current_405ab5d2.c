// 006e8dd0 current

/* <tokio[d7d91d38da47d894]::runtime::scheduler::Handle>::current */

undefined8 __rustcall
<tokio[d7d91d38da47d894]::runtime::scheduler::Handle>::current(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  undefined1 uVar5;
  ulonglong *puVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong *in_FS_OFFSET;
  undefined1 local_21;
  undefined1 *local_20;
  undefined *local_18;
  
  lVar1 = *in_FS_OFFSET;
  puVar6 = (ulonglong *)(lVar1 + -0x138);
  if (*(char *)(lVar1 + -0xf0) == '\0') {
    uVar8 = *puVar6;
joined_r0x006e8e86:
    if (uVar8 < 0x7fffffffffffffff) {
      *puVar6 = uVar8 + 1;
      lVar2 = *(longlong *)(lVar1 + -0x130);
      if (lVar2 != 2) {
        plVar3 = *(longlong **)(lVar1 + -0x128);
        uVar7 = 1;
        LOCK();
        lVar1 = *plVar3;
        *plVar3 = *plVar3 + 1;
        UNLOCK();
        if ((int)lVar2 == 1) {
          if (-1 < lVar1) {
LAB_006e8e46:
            *puVar6 = *puVar6 - 1;
            return uVar7;
          }
        }
        else if (-1 < lVar1) {
          uVar7 = 0;
          goto LAB_006e8e46;
        }
        goto LAB_006e8ec9;
      }
    }
    else {
      puVar6 = (ulonglong *)(*(code *)PTR_panic_already_mutably_borrowed_00799db0)();
    }
    *puVar6 = uVar8;
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
    if (*(char *)(lVar1 + -0xf0) == '\x01') {
      (*(code *)PTR_register_00799240)();
      *(undefined1 *)(lVar1 + -0xf0) = 0;
      uVar8 = *puVar6;
      goto joined_r0x006e8e86;
    }
  }
  local_21 = uVar5;
  local_20 = &local_21;
  local_18 = PTR_fmt_00799db8;
  (*(code *)PTR_panic_fmt_007991a8)(local_21,param_1);
LAB_006e8ec9:
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}


