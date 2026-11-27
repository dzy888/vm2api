// 005794e0 <<craggemini_core[66f3c71560d70857]::pool::PoolManager>::shutdown::{closure#0}::{closure#0}>

/* tokio[d7d91d38da47d894]::task::spawn::spawn::<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::shutdown::{closure#0}::{closure#0}>
    */

void __rustcall
tokio[d7d91d38da47d894]::task::spawn::spawn::
<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::shutdown::_closure_0_::_closure_0_>
          (undefined8 param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  code *pcVar5;
  longlong lVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined1 uVar9;
  undefined1 *puVar10;
  longlong *in_FS_OFFSET;
  undefined1 auStack_c028 [49152];
  
  puVar7 = PTR_NEXT_ID_00799878;
  puVar10 = auStack_c028 + 0xc000;
  do {
    puVar8 = puVar10;
    *(undefined8 *)(puVar8 + -0x1000) = 0;
    puVar10 = puVar8 + -0x1000;
  } while (puVar8 + -0x1000 != auStack_c028);
  do {
    LOCK();
    lVar1 = *(longlong *)puVar7;
    *(longlong *)puVar7 = *(longlong *)puVar7 + 1;
    UNLOCK();
  } while (lVar1 == 0);
  *(longlong *)(puVar8 + -0x1378) = lVar1;
  *(undefined1 **)(puVar8 + -0x1370) = puVar8 + -0x1378;
  *(undefined1 **)(puVar8 + -0x1368) = puVar8 + -0x1379;
  *(undefined8 *)(puVar8 + -5000) = 0x57955b;
  (*(code *)PTR_memcpy_00799008)(lVar1,0x30d0);
  lVar1 = *in_FS_OFFSET;
  if ((char)in_FS_OFFSET[-0x1e] != '\0') {
    if ((char)in_FS_OFFSET[-0x1e] != '\x01') {
      uVar9 = 1;
      if (puVar8[0x1d68] != '\0') {
        if (puVar8[0x1d68] != '\x03') goto LAB_00579683;
        *(undefined8 *)(puVar8 + -5000) = 0x579670;
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::
        <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::shutdown::_closure_0_>
                  (puVar8 + -0x1358,param_1);
      }
      plVar4 = *(longlong **)(puVar8 + -0x1360);
      LOCK();
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 != 0) goto LAB_00579683;
      *(undefined8 *)(puVar8 + -5000) = 0x579683;
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>::
      drop_slow(puVar8 + -0x1360);
      goto LAB_00579683;
    }
    *(undefined8 *)(puVar8 + -5000) = 0x579646;
    (*(code *)PTR_register_00799240)();
    *(undefined1 *)(in_FS_OFFSET + -0x1e) = 0;
  }
  *(undefined8 *)(puVar8 + -5000) = 0x579595;
  (*(code *)PTR_memcpy_00799008)();
  if (0x7ffffffffffffffe < (ulonglong)in_FS_OFFSET[-0x27]) {
    *(undefined8 *)(puVar8 + -5000) = 0x57962f;
    (*(code *)PTR_panic_already_mutably_borrowed_00799db0)();
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  in_FS_OFFSET[-0x27] = in_FS_OFFSET[-0x27] + 1;
  lVar6 = in_FS_OFFSET[-0x26];
  puVar10 = puVar8 + -0x1370;
  *(undefined8 *)(puVar8 + -5000) = 0x5795cf;
  (*(code *)PTR_memcpy_00799008)(0x7fffffffffffffff,0x30e0);
  if ((int)lVar6 != 2) {
    puVar2 = *(undefined8 **)(puVar8 + 0x1d70);
    *(undefined8 *)(puVar8 + -5000) = 0x5795ff;
    (*(code *)PTR_memcpy_00799008)();
    uVar3 = *puVar2;
    *(undefined8 *)(puVar8 + -5000) = 0x57960d;
    ::<tokio[d7d91d38da47d894]::runtime::scheduler::Handle>::spawn::
    <<craggemini_core[66f3c71560d70857]::pool::PoolManager>::shutdown::_closure_0_::_closure_0_>
              (lVar1 + -0x130,puVar8 + 0x7f30,uVar3);
    in_FS_OFFSET[-0x27] = in_FS_OFFSET[-0x27] + -1;
    return;
  }
  do {
    if (puVar8[0x4e48] == '\0') {
LAB_005796e8:
      plVar4 = *(longlong **)(puVar8 + 0x1d80);
      LOCK();
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
        *(undefined8 *)(puVar8 + -5000) = 0x5796fe;
        <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>::
        drop_slow(puVar8 + 0x1d80);
      }
    }
    else if (puVar8[0x4e48] == '\x03') {
      *(undefined8 *)(puVar8 + -5000) = 0x5796e8;
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
      <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::shutdown::_closure_0_>
                (puVar8 + 0x1d88,puVar10);
      goto LAB_005796e8;
    }
    in_FS_OFFSET[-0x27] = in_FS_OFFSET[-0x27] + -1;
    uVar9 = 0;
LAB_00579683:
    puVar8[0x4e50] = uVar9;
    *(undefined1 **)(puVar8 + 0x1d70) = puVar8 + 0x4e50;
    *(undefined **)(puVar8 + 0x1d78) = PTR_fmt_00799db8;
    puVar10 = puVar8 + 0x1d70;
    *(undefined8 *)(puVar8 + -5000) = 0x5796c2;
    (*(code *)PTR_panic_fmt_007991a8)();
  } while( true );
}


