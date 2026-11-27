// 006871a0 recv

/* <std[6c98fd8553dbae28]::sync::mpmc::list::Channel<(serde_json[dc3825464c436029]::value::Value,
   bool, 
   core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>::recv
    */

void __rustcall
<std[6c98fd8553dbae28]::sync::mpmc::list::Channel<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>
::recv(undefined8 *param_1,ulonglong *param_2,longlong param_3,uint param_4)

{
  ulonglong *puVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong *in_FS_OFFSET;
  bool bVar21;
  longlong local_d0;
  uint local_c8;
  longlong *local_c0;
  ulonglong *local_b8;
  longlong *plStack_b0;
  longlong *local_a8;
  ulonglong *local_a0;
  longlong *plStack_98;
  longlong *local_90;
  longlong local_88 [6];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  local_90 = (longlong *)(*in_FS_OFFSET + -0x20);
  local_88[2] = 0;
  local_88[3] = 0;
  local_88[0] = 0;
  local_88[1] = 0;
  local_88[4] = 0;
  local_d0 = param_3;
  local_c8 = param_4;
LAB_006871f0:
  uVar8 = *param_2;
  uVar20 = param_2[1];
  uVar13 = 0;
  uVar17 = 0;
  do {
    uVar5 = local_c8;
    lVar10 = local_d0;
    uVar9 = 6;
    if (uVar17 < 6) {
      uVar9 = uVar17;
    }
    uVar11 = uVar8 >> 1;
    uVar18 = (uint)uVar11 & 0x1f;
    uVar19 = (ulonglong)uVar18;
    if (uVar19 == 0x1f) {
      if (uVar17 < 7) {
        if (uVar17 != 0) {
          uVar5 = uVar13 & 7;
          if (6 < uVar13 - 1) {
            uVar9 = uVar13 & 0xfffffff8;
            do {
              uVar9 = uVar9 - 8;
            } while (uVar9 != 0);
            if (uVar5 == 0) goto LAB_00687206;
          }
          do {
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
      }
      else {
LAB_00687200:
        (*(code *)PTR_yield_now_00799b28)();
      }
    }
    else {
      uVar15 = uVar8 + 2;
      if ((uVar8 & 1) == 0) {
        LOCK();
        UNLOCK();
        uVar3 = param_2[0x10];
        if (uVar11 == uVar3 >> 1) break;
        uVar15 = uVar15 | 0x3f < (uVar3 ^ uVar8);
      }
      if (uVar20 == 0) {
        if (6 < uVar17) goto LAB_00687200;
        if (uVar17 != 0) {
          uVar5 = uVar13 & 7;
          if (6 < uVar13 - 1) {
            uVar9 = uVar13 & 0xfffffff8;
            do {
              uVar9 = uVar9 - 8;
            } while (uVar9 != 0);
            if (uVar5 == 0) goto LAB_00687206;
          }
          do {
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
      }
      else {
        LOCK();
        uVar11 = *param_2;
        if (uVar8 == uVar11) {
          *param_2 = uVar15;
        }
        UNLOCK();
        if (uVar8 == uVar11) {
          if (uVar18 != 0x1e) goto LAB_0068752b;
          uVar8 = *(ulonglong *)(uVar20 + 0x7c0);
          if (uVar8 != 0) goto LAB_00687509;
          uVar13 = 0;
          uVar17 = 0;
          goto LAB_00687773;
        }
        if (uVar17 != 0) {
          uVar9 = uVar9 * uVar9;
          if (7 < uVar9) {
            uVar5 = uVar9 & 0x38;
            do {
              uVar5 = uVar5 - 8;
            } while (uVar5 != 0);
            if ((uVar9 & 7) == 0) goto LAB_00687206;
          }
          uVar9 = uVar9 & 5;
          do {
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
      }
    }
LAB_00687206:
    iVar4 = uVar17 * 2;
    uVar8 = *param_2;
    uVar20 = param_2[1];
    uVar17 = uVar17 + 1;
    uVar13 = uVar13 + iVar4 + 1;
  } while( true );
  if ((uVar3 & 1) != 0) goto LAB_006876a3;
  if (local_c8 != 0xffffffff) {
    lVar6 = (*(code *)PTR_now_00799250)();
    if (lVar6 == lVar10) {
      if (uVar5 <= (uint)uVar11) goto LAB_006877b8;
    }
    else if (lVar10 <= lVar6) goto LAB_006877b8;
  }
  local_a8 = local_88;
  plStack_98 = &local_d0;
  plVar7 = local_90;
  local_a0 = param_2;
  if (((char)in_FS_OFFSET[-3] == '\x01') ||
     (plVar7 = (longlong *)
               <std[6c98fd8553dbae28]::sys::thread_local::native::lazy::Storage<core[c0acaeba6ab4c2e0]::cell::Cell<core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpmc::context::Context>>,()>>
               ::get_or_init_slow::
               <<std[6c98fd8553dbae28]::sync::mpmc::context::Context>::with::CONTEXT::__rust_std_internal_init_fn>
                         (*in_FS_OFFSET + -0x20,0), plVar7 != (longlong *)0x0)) {
    lVar10 = *plVar7;
    *plVar7 = 0;
    if (lVar10 == 0) {
      plVar7 = (longlong *)(*(code *)PTR_new_007995e8)();
      local_a8 = (longlong *)0x0;
      local_c0 = local_88;
      plStack_b0 = &local_d0;
      local_b8 = param_2;
      recv::_closure_1_(&local_c0,plVar7);
      LOCK();
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
        (*(code *)PTR_drop_slow_007995f0)();
      }
    }
    else {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      *(undefined8 *)(lVar10 + 0x20) = 0;
      local_a8 = (longlong *)0x0;
      local_c0 = local_88;
      local_b8 = local_a0;
      plStack_b0 = plStack_98;
      recv::_closure_1_(&local_c0,lVar10);
      local_c0 = (longlong *)*plVar7;
      *plVar7 = lVar10;
      if (local_c0 != (longlong *)0x0) {
        LOCK();
        *local_c0 = *local_c0 + -1;
        UNLOCK();
        if (*local_c0 == 0) {
          (*(code *)PTR_drop_slow_007995f0)();
        }
      }
    }
  }
  else {
    <std[6c98fd8553dbae28]::sync::mpmc::context::Context>::with::
    <<std[6c98fd8553dbae28]::sync::mpmc::list::Channel<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>::recv::{closure#1},()>
    ::_closure_2_();
  }
  goto LAB_006871f0;
LAB_006877b8:
  *(undefined1 *)param_1 = 0;
  goto LAB_006876ab;
LAB_00687773:
  do {
    if (uVar17 < 7) {
      if (uVar17 != 0) {
        uVar5 = uVar13 & 7;
        if (6 < uVar13 - 1) {
          uVar9 = uVar13 & 0xfffffff8;
          do {
            uVar9 = uVar9 - 8;
          } while (uVar9 != 0);
          if (uVar5 == 0) goto LAB_00687756;
        }
        do {
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
    }
    else {
      (*(code *)PTR_yield_now_00799b28)();
    }
LAB_00687756:
    iVar4 = uVar17 * 2;
    uVar17 = uVar17 + 1;
    uVar8 = *(ulonglong *)(uVar20 + 0x7c0);
    uVar13 = uVar13 + iVar4 + 1;
  } while (uVar8 == 0);
LAB_00687509:
  lVar10 = *(longlong *)(uVar8 + 0x7c0);
  param_2[1] = uVar8;
  *param_2 = (ulonglong)(lVar10 != 0) + (uVar15 & 0xfffffffffffffffe) + 2;
LAB_0068752b:
  puVar2 = (undefined4 *)(uVar20 + (uVar18 << 6));
  local_88[2] = uVar20;
  local_88[3] = uVar19;
  if ((*(ulonglong *)(uVar20 + 0x38 + (ulonglong)(uVar18 << 6)) & 1) == 0) {
    uVar13 = 0;
    uVar17 = 0;
    do {
      if (uVar17 < 7) {
        if (uVar17 != 0) {
          uVar5 = uVar13 & 7;
          if (6 < uVar13 - 1) {
            uVar9 = uVar13 & 0xfffffff8;
            do {
              uVar9 = uVar9 - 8;
            } while (uVar9 != 0);
            if (uVar5 == 0) goto LAB_00687556;
          }
          do {
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
      }
      else {
        (*(code *)PTR_yield_now_00799b28)();
      }
LAB_00687556:
      iVar4 = uVar17 * 2;
      uVar17 = uVar17 + 1;
      uVar13 = uVar13 + iVar4 + 1;
    } while ((*(ulonglong *)(puVar2 + 0xe) & 1) == 0);
  }
  local_38 = *(undefined8 *)(puVar2 + 8);
  local_58 = *puVar2;
  uStack_54 = puVar2[1];
  uStack_50 = puVar2[2];
  uStack_4c = puVar2[3];
  local_48 = puVar2[4];
  uStack_44 = puVar2[5];
  uStack_40 = puVar2[6];
  uStack_3c = puVar2[7];
  lVar6 = *(longlong *)(puVar2 + 10);
  uVar14 = *(undefined8 *)(puVar2 + 0xc);
  lVar10 = uVar19 + 1;
  if (lVar10 == 0x1f) {
    lVar10 = 0;
    do {
      lVar16 = lVar10 * 0x40;
      lVar12 = uVar20 + lVar16;
      if ((*(ulonglong *)(uVar20 + 0x38 + lVar16) & 2) == 0) {
        uVar8 = *(ulonglong *)(lVar12 + 0x38);
        do {
          LOCK();
          uVar11 = *(ulonglong *)(lVar12 + 0x38);
          bVar21 = uVar8 == uVar11;
          if (bVar21) {
            *(ulonglong *)(lVar12 + 0x38) = uVar8 | 4;
          }
          else {
            uVar8 = uVar11;
          }
          UNLOCK();
        } while (!bVar21);
        if ((uVar8 & 2) == 0) goto LAB_0068769d;
      }
      if ((*(ulonglong *)(uVar20 + 0x78 + lVar16) & 2) == 0) {
        uVar8 = *(ulonglong *)(lVar12 + 0x78);
        do {
          LOCK();
          uVar11 = *(ulonglong *)(lVar12 + 0x78);
          bVar21 = uVar8 == uVar11;
          if (bVar21) {
            *(ulonglong *)(lVar12 + 0x78) = uVar8 | 4;
          }
          else {
            uVar8 = uVar11;
          }
          UNLOCK();
        } while (!bVar21);
        if ((uVar8 & 2) == 0) goto LAB_0068769d;
      }
      lVar10 = lVar10 + 2;
    } while (lVar10 != 0x1e);
LAB_0068768a:
    (*(code *)PTR___rust_dealloc_00798fc8)(local_58,8);
  }
  else {
    uVar8 = *(ulonglong *)(puVar2 + 0xe);
    do {
      LOCK();
      uVar11 = *(ulonglong *)(puVar2 + 0xe);
      bVar21 = uVar8 == uVar11;
      if (bVar21) {
        *(ulonglong *)(puVar2 + 0xe) = uVar8 | 2;
      }
      else {
        uVar8 = uVar11;
      }
      UNLOCK();
    } while (!bVar21);
    if ((uVar8 & 4) != 0) {
      if (uVar18 < 0x1d) {
        do {
          if ((*(ulonglong *)(uVar20 + 0x38 + lVar10 * 0x40) & 2) == 0) {
            lVar12 = lVar10 * 0x40 + uVar20;
            uVar8 = *(ulonglong *)(lVar12 + 0x38);
            do {
              puVar1 = (ulonglong *)(lVar12 + 0x38);
              LOCK();
              uVar11 = *puVar1;
              bVar21 = uVar8 == uVar11;
              if (bVar21) {
                *puVar1 = uVar8 | 4;
              }
              else {
                uVar8 = uVar11;
              }
              UNLOCK();
            } while (!bVar21);
            if ((uVar8 & 2) == 0) goto LAB_0068769d;
          }
          lVar10 = lVar10 + 1;
        } while (lVar10 != 0x1e);
      }
      goto LAB_0068768a;
    }
  }
LAB_0068769d:
  if (lVar6 != -2) {
    param_1[4] = local_38;
    param_1[2] = CONCAT44(uStack_44,local_48);
    param_1[3] = CONCAT44(uStack_3c,uStack_40);
    *param_1 = CONCAT44(uStack_54,local_58);
    param_1[1] = CONCAT44(uStack_4c,uStack_50);
    param_1[5] = lVar6;
    lVar10 = 0x30;
    goto LAB_00687726;
  }
LAB_006876a3:
  *(undefined1 *)param_1 = 1;
LAB_006876ab:
  uVar14 = 0xfffffffffffffffe;
  lVar10 = 0x28;
LAB_00687726:
  *(undefined8 *)((longlong)param_1 + lVar10) = uVar14;
  return;
}


