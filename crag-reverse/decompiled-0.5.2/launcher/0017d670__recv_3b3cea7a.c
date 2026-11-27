// 0017d670 recv

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
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  longlong lVar17;
  uint uVar18;
  uint uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong *in_FS_OFFSET;
  bool bVar22;
  longlong *local_e0;
  undefined8 *local_d8;
  longlong local_d0;
  uint local_c8;
  longlong *local_c0;
  ulonglong *local_b8;
  longlong *plStack_b0;
  longlong *local_a8;
  ulonglong *local_a0;
  longlong *plStack_98;
  undefined8 *local_90;
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
  
  local_90 = (undefined8 *)(*in_FS_OFFSET + -0x20);
  local_88[2] = 0;
  local_88[3] = 0;
  local_88[0] = 0;
  local_88[1] = 0;
  local_88[4] = 0;
  local_d8 = param_1;
  local_d0 = param_3;
  local_c8 = param_4;
LAB_0017d6c0:
  uVar9 = *param_2;
  uVar21 = param_2[1];
  uVar14 = 0;
  uVar18 = 0;
  do {
    uVar6 = local_c8;
    lVar11 = local_d0;
    uVar10 = 6;
    if (uVar18 < 6) {
      uVar10 = uVar18;
    }
    uVar12 = uVar9 >> 1;
    uVar19 = (uint)uVar12 & 0x1f;
    uVar20 = (ulonglong)uVar19;
    if (uVar20 == 0x1f) {
      if (uVar18 < 7) {
        if (uVar18 != 0) {
          uVar6 = uVar14 & 7;
          if (6 < uVar14 - 1) {
            uVar10 = uVar14 & 0xfffffff8;
            do {
              uVar10 = uVar10 - 8;
            } while (uVar10 != 0);
            if (uVar6 == 0) goto LAB_0017d6d6;
          }
          do {
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
      }
      else {
LAB_0017d6d0:
        (*(code *)PTR_yield_now_00219ff8)();
      }
    }
    else {
      uVar16 = uVar9 + 2;
      if ((uVar9 & 1) == 0) {
        LOCK();
        UNLOCK();
        uVar3 = param_2[0x10];
        if (uVar12 == uVar3 >> 1) break;
        uVar16 = uVar16 | 0x3f < (uVar3 ^ uVar9);
      }
      if (uVar21 == 0) {
        if (6 < uVar18) goto LAB_0017d6d0;
        if (uVar18 != 0) {
          uVar6 = uVar14 & 7;
          if (6 < uVar14 - 1) {
            uVar10 = uVar14 & 0xfffffff8;
            do {
              uVar10 = uVar10 - 8;
            } while (uVar10 != 0);
            if (uVar6 == 0) goto LAB_0017d6d6;
          }
          do {
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
      }
      else {
        LOCK();
        uVar12 = *param_2;
        if (uVar9 == uVar12) {
          *param_2 = uVar16;
        }
        UNLOCK();
        if (uVar9 == uVar12) {
          if (uVar19 != 0x1e) goto LAB_0017d9f9;
          uVar9 = *(ulonglong *)(uVar21 + 0x7c0);
          if (uVar9 != 0) goto LAB_0017d9d7;
          uVar14 = 0;
          uVar18 = 0;
          goto LAB_0017dc43;
        }
        if (uVar18 != 0) {
          uVar10 = uVar10 * uVar10;
          if (7 < uVar10) {
            uVar6 = uVar10 & 0x38;
            do {
              uVar6 = uVar6 - 8;
            } while (uVar6 != 0);
            if ((uVar10 & 7) == 0) goto LAB_0017d6d6;
          }
          uVar10 = uVar10 & 5;
          do {
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
      }
    }
LAB_0017d6d6:
    iVar5 = uVar18 * 2;
    uVar9 = *param_2;
    uVar21 = param_2[1];
    uVar18 = uVar18 + 1;
    uVar14 = uVar14 + iVar5 + 1;
  } while( true );
  if ((uVar3 & 1) != 0) goto LAB_0017db73;
  if (local_c8 != 0xffffffff) {
    lVar7 = (*(code *)PTR_now_00219fc8)();
    if (lVar7 == lVar11) {
      if (uVar6 <= (uint)uVar12) goto LAB_0017dc88;
    }
    else if (lVar11 <= lVar7) goto LAB_0017dc88;
  }
  local_a8 = local_88;
  plStack_98 = &local_d0;
  puVar8 = local_90;
  local_a0 = param_2;
  if (((char)in_FS_OFFSET[-3] == '\x01') ||
     (puVar8 = (undefined8 *)
               <std[6c98fd8553dbae28]::sys::thread_local::native::lazy::Storage<core[c0acaeba6ab4c2e0]::cell::Cell<core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpmc::context::Context>>,()>>
               ::get_or_init_slow::
               <<std[6c98fd8553dbae28]::sync::mpmc::context::Context>::with::CONTEXT::__rust_std_internal_init_fn>
                         (*in_FS_OFFSET + -0x20,0), puVar8 != (undefined8 *)0x0)) {
    plVar4 = (longlong *)*puVar8;
    *puVar8 = 0;
    if (plVar4 == (longlong *)0x0) {
      local_e0 = (longlong *)(*(code *)PTR_new_00219fc0)();
      local_a8 = (longlong *)0x0;
      local_c0 = local_88;
      plStack_b0 = &local_d0;
      local_b8 = param_2;
      recv::_closure_1_(&local_c0,local_e0);
      LOCK();
      *local_e0 = *local_e0 + -1;
      UNLOCK();
      if (*local_e0 == 0) {
        <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::mpmc::context::Inner>>::
        drop_slow(&local_e0);
      }
    }
    else {
      plVar4[3] = 0;
      plVar4[4] = 0;
      local_a8 = (longlong *)0x0;
      local_c0 = local_88;
      local_b8 = local_a0;
      plStack_b0 = plStack_98;
      local_e0 = plVar4;
      recv::_closure_1_(&local_c0,plVar4);
      local_c0 = (longlong *)*puVar8;
      *puVar8 = plVar4;
      if (local_c0 != (longlong *)0x0) {
        LOCK();
        *local_c0 = *local_c0 + -1;
        UNLOCK();
        if (*local_c0 == 0) {
          <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::mpmc::context::Inner>>::
          drop_slow(&local_c0);
        }
      }
    }
  }
  else {
    <std[6c98fd8553dbae28]::sync::mpmc::context::Context>::with::
    <<std[6c98fd8553dbae28]::sync::mpmc::list::Channel<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>::recv::{closure#1},()>
    ::_closure_2_();
  }
  goto LAB_0017d6c0;
LAB_0017dc88:
  *(undefined1 *)local_d8 = 0;
  goto LAB_0017db7b;
LAB_0017dc43:
  do {
    if (uVar18 < 7) {
      if (uVar18 != 0) {
        uVar6 = uVar14 & 7;
        if (6 < uVar14 - 1) {
          uVar10 = uVar14 & 0xfffffff8;
          do {
            uVar10 = uVar10 - 8;
          } while (uVar10 != 0);
          if (uVar6 == 0) goto LAB_0017dc26;
        }
        do {
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
    }
    else {
      (*(code *)PTR_yield_now_00219ff8)();
    }
LAB_0017dc26:
    iVar5 = uVar18 * 2;
    uVar18 = uVar18 + 1;
    uVar9 = *(ulonglong *)(uVar21 + 0x7c0);
    uVar14 = uVar14 + iVar5 + 1;
  } while (uVar9 == 0);
LAB_0017d9d7:
  lVar11 = *(longlong *)(uVar9 + 0x7c0);
  param_2[1] = uVar9;
  *param_2 = (ulonglong)(lVar11 != 0) + (uVar16 & 0xfffffffffffffffe) + 2;
LAB_0017d9f9:
  puVar2 = (undefined4 *)(uVar21 + (uVar19 << 6));
  local_88[2] = uVar21;
  local_88[3] = uVar20;
  if ((*(ulonglong *)(uVar21 + 0x38 + (ulonglong)(uVar19 << 6)) & 1) == 0) {
    uVar14 = 0;
    uVar18 = 0;
    do {
      if (uVar18 < 7) {
        if (uVar18 != 0) {
          uVar6 = uVar14 & 7;
          if (6 < uVar14 - 1) {
            uVar10 = uVar14 & 0xfffffff8;
            do {
              uVar10 = uVar10 - 8;
            } while (uVar10 != 0);
            if (uVar6 == 0) goto LAB_0017da26;
          }
          do {
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
      }
      else {
        (*(code *)PTR_yield_now_00219ff8)();
      }
LAB_0017da26:
      iVar5 = uVar18 * 2;
      uVar18 = uVar18 + 1;
      uVar14 = uVar14 + iVar5 + 1;
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
  lVar7 = *(longlong *)(puVar2 + 10);
  uVar15 = *(undefined8 *)(puVar2 + 0xc);
  lVar11 = uVar20 + 1;
  if (lVar11 == 0x1f) {
    lVar11 = 0;
    do {
      lVar17 = lVar11 * 0x40;
      lVar13 = uVar21 + lVar17;
      if ((*(ulonglong *)(uVar21 + 0x38 + lVar17) & 2) == 0) {
        uVar9 = *(ulonglong *)(lVar13 + 0x38);
        do {
          LOCK();
          uVar12 = *(ulonglong *)(lVar13 + 0x38);
          bVar22 = uVar9 == uVar12;
          if (bVar22) {
            *(ulonglong *)(lVar13 + 0x38) = uVar9 | 4;
          }
          else {
            uVar9 = uVar12;
          }
          UNLOCK();
        } while (!bVar22);
        if ((uVar9 & 2) == 0) goto LAB_0017db6d;
      }
      if ((*(ulonglong *)(uVar21 + 0x78 + lVar17) & 2) == 0) {
        uVar9 = *(ulonglong *)(lVar13 + 0x78);
        do {
          LOCK();
          uVar12 = *(ulonglong *)(lVar13 + 0x78);
          bVar22 = uVar9 == uVar12;
          if (bVar22) {
            *(ulonglong *)(lVar13 + 0x78) = uVar9 | 4;
          }
          else {
            uVar9 = uVar12;
          }
          UNLOCK();
        } while (!bVar22);
        if ((uVar9 & 2) == 0) goto LAB_0017db6d;
      }
      lVar11 = lVar11 + 2;
    } while (lVar11 != 0x1e);
LAB_0017db5a:
    (*(code *)PTR___rust_dealloc_00219c40)(local_58,8);
  }
  else {
    uVar9 = *(ulonglong *)(puVar2 + 0xe);
    do {
      LOCK();
      uVar12 = *(ulonglong *)(puVar2 + 0xe);
      bVar22 = uVar9 == uVar12;
      if (bVar22) {
        *(ulonglong *)(puVar2 + 0xe) = uVar9 | 2;
      }
      else {
        uVar9 = uVar12;
      }
      UNLOCK();
    } while (!bVar22);
    if ((uVar9 & 4) != 0) {
      if (uVar19 < 0x1d) {
        do {
          if ((*(ulonglong *)(uVar21 + 0x38 + lVar11 * 0x40) & 2) == 0) {
            lVar13 = lVar11 * 0x40 + uVar21;
            uVar9 = *(ulonglong *)(lVar13 + 0x38);
            do {
              puVar1 = (ulonglong *)(lVar13 + 0x38);
              LOCK();
              uVar12 = *puVar1;
              bVar22 = uVar9 == uVar12;
              if (bVar22) {
                *puVar1 = uVar9 | 4;
              }
              else {
                uVar9 = uVar12;
              }
              UNLOCK();
            } while (!bVar22);
            if ((uVar9 & 2) == 0) goto LAB_0017db6d;
          }
          lVar11 = lVar11 + 1;
        } while (lVar11 != 0x1e);
      }
      goto LAB_0017db5a;
    }
  }
LAB_0017db6d:
  if (lVar7 != -2) {
    local_d8[4] = local_38;
    local_d8[2] = CONCAT44(uStack_44,local_48);
    local_d8[3] = CONCAT44(uStack_3c,uStack_40);
    *local_d8 = CONCAT44(uStack_54,local_58);
    local_d8[1] = CONCAT44(uStack_4c,uStack_50);
    local_d8[5] = lVar7;
    lVar11 = 0x30;
    goto LAB_0017dbf6;
  }
LAB_0017db73:
  *(undefined1 *)local_d8 = 1;
LAB_0017db7b:
  uVar15 = 0xfffffffffffffffe;
  lVar11 = 0x28;
LAB_0017dbf6:
  *(undefined8 *)((longlong)local_d8 + lVar11) = uVar15;
  return;
}


