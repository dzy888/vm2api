// 00579b80 <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::retire_slot_bg::{closure#0}>

/* tokio[d7d91d38da47d894]::task::spawn::spawn::<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::retire_slot_bg::{closure#0}>
    */

void __rustcall
tokio[d7d91d38da47d894]::task::spawn::spawn::
<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::retire_slot_bg::_closure_0_>
          (undefined8 param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  longlong lVar5;
  undefined *puVar6;
  undefined1 uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  longlong *in_FS_OFFSET;
  undefined1 auStack_8028 [32768];
  
  puVar6 = PTR_NEXT_ID_00799878;
  puVar9 = auStack_8028 + 0x8000;
  do {
    puVar8 = puVar9;
    *(undefined8 *)(puVar8 + -0x1000) = 0;
    puVar9 = puVar8 + -0x1000;
  } while (puVar8 + -0x1000 != auStack_8028);
  do {
    LOCK();
    lVar1 = *(longlong *)puVar6;
    *(longlong *)puVar6 = *(longlong *)puVar6 + 1;
    UNLOCK();
  } while (lVar1 == 0);
  *(longlong *)(puVar8 + -0x1018) = lVar1;
  *(undefined1 **)(puVar8 + -0x1010) = puVar8 + -0x1018;
  *(undefined1 **)(puVar8 + -0x1008) = puVar8 + -0x1019;
  *(undefined8 *)(puVar8 + -0x1028) = 0x579bf8;
  (*(code *)PTR_memcpy_00799008)(lVar1,0x1ff8);
  lVar1 = *in_FS_OFFSET;
  if ((char)in_FS_OFFSET[-0x1e] != '\0') {
    if ((char)in_FS_OFFSET[-0x1e] != '\x01') {
      *(undefined8 *)(puVar8 + -0x1028) = 0x579cf4;
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
      <tokio[d7d91d38da47d894]::task::spawn::spawn_inner<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::retire_slot_bg::_closure_0_>::_closure_0_>
                (puVar8 + -0x1010,param_1);
      uVar7 = 1;
      goto LAB_00579cf6;
    }
    *(undefined8 *)(puVar8 + -0x1028) = 0x579cdf;
    (*(code *)PTR_register_00799240)();
    *(undefined1 *)(in_FS_OFFSET + -0x1e) = 0;
  }
  *(undefined8 *)(puVar8 + -0x1028) = 0x579c31;
  (*(code *)PTR_memcpy_00799008)();
  if (0x7ffffffffffffffe < (ulonglong)in_FS_OFFSET[-0x27]) {
    *(undefined8 *)(puVar8 + -0x1028) = 0x579cc8;
    (*(code *)PTR_panic_already_mutably_borrowed_00799db0)();
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  in_FS_OFFSET[-0x27] = in_FS_OFFSET[-0x27] + 1;
  lVar5 = in_FS_OFFSET[-0x26];
  puVar9 = puVar8 + -0x1010;
  *(undefined8 *)(puVar8 + -0x1028) = 0x579c68;
  (*(code *)PTR_memcpy_00799008)(0x7fffffffffffffff,0x2008);
  if ((int)lVar5 != 2) {
    puVar2 = *(undefined8 **)(puVar8 + 0xff8);
    *(undefined8 *)(puVar8 + -0x1028) = 0x579c98;
    (*(code *)PTR_memcpy_00799008)();
    uVar3 = *puVar2;
    *(undefined8 *)(puVar8 + -0x1028) = 0x579ca7;
    ::<tokio[d7d91d38da47d894]::runtime::scheduler::Handle>::spawn::
    <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::retire_slot_bg::_closure_0_>
              (lVar1 + -0x130,puVar8 + 0x5008,uVar3);
    in_FS_OFFSET[-0x27] = in_FS_OFFSET[-0x27] + -1;
    return;
  }
  do {
    *(undefined8 *)(puVar8 + -0x1028) = 0x579d41;
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <tokio[d7d91d38da47d894]::task::spawn::spawn_inner<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::retire_slot_bg::_closure_0_>::_closure_0_>
              (puVar8 + 0xff8,puVar9);
    in_FS_OFFSET[-0x27] = in_FS_OFFSET[-0x27] + -1;
    uVar7 = 0;
LAB_00579cf6:
    puVar8[0x3000] = uVar7;
    *(undefined1 **)(puVar8 + 0xff8) = puVar8 + 0x3000;
    *(undefined **)(puVar8 + 0x1000) = PTR_fmt_00799db8;
    puVar9 = puVar8 + 0xff8;
    *(undefined8 *)(puVar8 + -0x1028) = 0x579d34;
    (*(code *)PTR_panic_fmt_007991a8)();
  } while( true );
}


