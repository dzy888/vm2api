// 0017e3e0 recv

/* <std[6c98fd8553dbae28]::sync::mpmc::list::Channel<()>>::recv */

ulonglong __rustcall
<std[6c98fd8553dbae28]::sync::mpmc::list::Channel<()>>::recv
          (ulonglong *param_1,longlong param_2,uint param_3)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong *plVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  longlong *in_FS_OFFSET;
  bool bVar18;
  longlong *local_a8;
  longlong local_a0;
  uint local_98;
  longlong *local_90;
  ulonglong *local_88;
  longlong *plStack_80;
  longlong *local_78;
  ulonglong *local_70;
  longlong *plStack_68;
  undefined8 *local_60;
  longlong local_58 [2];
  longlong *local_48;
  ulonglong uStack_40;
  undefined8 local_38;
  
  local_60 = (undefined8 *)(*in_FS_OFFSET + -0x20);
  local_48 = (longlong *)0x0;
  uStack_40 = 0;
  local_58[0] = 0;
  local_58[1] = 0;
  local_38 = 0;
  local_a0 = param_2;
  local_98 = param_3;
LAB_0017e425:
  uVar8 = *param_1;
  plVar13 = (longlong *)param_1[1];
  uVar17 = 0;
  uVar11 = 0;
  do {
    uVar3 = local_98;
    lVar12 = local_a0;
    uVar4 = (uint)uVar11;
    uVar10 = 6;
    if (uVar4 < 6) {
      uVar10 = uVar11;
    }
    uVar11 = uVar8 >> 1;
    uVar14 = (uint)uVar11 & 0x1f;
    uVar15 = (ulonglong)uVar14;
    if (uVar15 == 0x1f) {
      if (uVar4 < 7) {
        if (uVar4 != 0) {
          uVar3 = uVar17 & 7;
          if (6 < uVar17 - 1) {
            uVar14 = uVar17 & 0xfffffff8;
            do {
              uVar14 = uVar14 - 8;
            } while (uVar14 != 0);
            if ((uVar17 & 7) == 0) goto LAB_0017e446;
          }
          do {
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
        }
      }
      else {
LAB_0017e440:
        (*(code *)PTR_yield_now_00219ff8)();
      }
    }
    else {
      uVar16 = uVar8 + 2;
      if ((uVar8 & 1) == 0) {
        LOCK();
        UNLOCK();
        uVar1 = param_1[0x10];
        if (uVar11 == uVar1 >> 1) break;
        uVar16 = uVar16 | 0x3f < (uVar1 ^ uVar8);
      }
      if (plVar13 == (longlong *)0x0) {
        if (6 < uVar4) goto LAB_0017e440;
        if (uVar4 != 0) {
          uVar3 = uVar17 & 7;
          if (6 < uVar17 - 1) {
            uVar14 = uVar17 & 0xfffffff8;
            do {
              uVar14 = uVar14 - 8;
            } while (uVar14 != 0);
            if ((uVar17 & 7) == 0) goto LAB_0017e446;
          }
          do {
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
        }
      }
      else {
        LOCK();
        uVar11 = *param_1;
        if (uVar8 == uVar11) {
          *param_1 = uVar16;
        }
        UNLOCK();
        if (uVar8 == uVar11) {
          if (uVar14 != 0x1e) goto LAB_0017e76b;
          plVar7 = (longlong *)*plVar13;
          if (plVar7 != (longlong *)0x0) goto LAB_0017e74d;
          uVar3 = 0;
          uVar17 = 0;
          goto LAB_0017ee30;
        }
        if (uVar4 != 0) {
          uVar3 = (int)uVar10 * (int)uVar10;
          if (7 < uVar3) {
            uVar14 = uVar3 & 0x38;
            do {
              uVar14 = uVar14 - 8;
            } while (uVar14 != 0);
            if ((uVar3 & 7) == 0) goto LAB_0017e446;
          }
          uVar3 = uVar3 & 5;
          do {
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
        }
      }
    }
LAB_0017e446:
    uVar8 = *param_1;
    plVar13 = (longlong *)param_1[1];
    uVar11 = (ulonglong)(uVar4 + 1);
    uVar17 = uVar17 + uVar4 * 2 + 1;
  } while( true );
  if ((uVar1 & 1) != 0) {
    uVar10 = CONCAT71((int7)(uVar10 >> 8),1);
    goto LAB_0017edb0;
  }
  if (local_98 != 0xffffffff) {
    lVar5 = (*(code *)PTR_now_00219fc8)();
    if (lVar5 == lVar12) {
      if (uVar3 <= (uint)uVar11) goto LAB_0017ee7f;
    }
    else if (lVar12 <= lVar5) goto LAB_0017ee7f;
  }
  local_78 = local_58;
  plStack_68 = &local_a0;
  puVar6 = local_60;
  local_70 = param_1;
  if (((char)in_FS_OFFSET[-3] == '\x01') ||
     (puVar6 = (undefined8 *)
               <std[6c98fd8553dbae28]::sys::thread_local::native::lazy::Storage<core[c0acaeba6ab4c2e0]::cell::Cell<core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpmc::context::Context>>,()>>
               ::get_or_init_slow::
               <<std[6c98fd8553dbae28]::sync::mpmc::context::Context>::with::CONTEXT::__rust_std_internal_init_fn>
                         (*in_FS_OFFSET + -0x20,0), puVar6 != (undefined8 *)0x0)) {
    plVar13 = (longlong *)*puVar6;
    *puVar6 = 0;
    if (plVar13 == (longlong *)0x0) {
      local_a8 = (longlong *)(*(code *)PTR_new_00219fc0)();
      local_78 = (longlong *)0x0;
      local_90 = local_58;
      plStack_80 = &local_a0;
      local_88 = param_1;
      <std[6c98fd8553dbae28]::sync::mpmc::list::Channel<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>
      ::recv::_closure_1_(&local_90,local_a8);
      LOCK();
      *local_a8 = *local_a8 + -1;
      UNLOCK();
      if (*local_a8 == 0) {
        <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::mpmc::context::Inner>>::
        drop_slow(&local_a8);
      }
    }
    else {
      plVar13[3] = 0;
      plVar13[4] = 0;
      local_78 = (longlong *)0x0;
      local_90 = local_58;
      local_88 = local_70;
      plStack_80 = plStack_68;
      local_a8 = plVar13;
      <std[6c98fd8553dbae28]::sync::mpmc::list::Channel<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>
      ::recv::_closure_1_(&local_90,plVar13);
      local_90 = (longlong *)*puVar6;
      *puVar6 = plVar13;
      if (local_90 != (longlong *)0x0) {
        LOCK();
        *local_90 = *local_90 + -1;
        UNLOCK();
        if (*local_90 == 0) {
          <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::mpmc::context::Inner>>::
          drop_slow(&local_90);
        }
      }
    }
  }
  else {
    <std[6c98fd8553dbae28]::sync::mpmc::context::Context>::with::
    <<std[6c98fd8553dbae28]::sync::mpmc::list::Channel<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>::recv::{closure#1},()>
    ::_closure_2_();
  }
  goto LAB_0017e425;
LAB_0017ee7f:
  uVar10 = 0;
  goto LAB_0017edb0;
LAB_0017ee30:
  do {
    if (uVar17 < 7) {
      if (uVar17 != 0) {
        uVar4 = uVar3 & 7;
        if (6 < uVar3 - 1) {
          uVar9 = uVar3 & 0xfffffff8;
          do {
            uVar9 = uVar9 - 8;
          } while (uVar9 != 0);
          if ((uVar3 & 7) == 0) goto LAB_0017ee16;
        }
        do {
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
    }
    else {
      (*(code *)PTR_yield_now_00219ff8)();
    }
LAB_0017ee16:
    iVar2 = uVar17 * 2;
    uVar17 = uVar17 + 1;
    plVar7 = (longlong *)*plVar13;
    uVar3 = uVar3 + iVar2 + 1;
  } while (plVar7 == (longlong *)0x0);
LAB_0017e74d:
  uVar10 = (uVar16 & 0xfffffffffffffffe) + (ulonglong)(*plVar7 != 0) + 2;
  param_1[1] = (ulonglong)plVar7;
  *param_1 = uVar10;
LAB_0017e76b:
  local_48 = plVar13;
  uStack_40 = uVar15;
  if ((plVar13[uVar15 + 1] & 1U) == 0) {
    uVar17 = 0;
    uVar3 = 0;
    do {
      if (uVar3 < 7) {
        if (uVar3 != 0) {
          uVar4 = uVar17 & 7;
          if (6 < uVar17 - 1) {
            uVar9 = uVar17 & 0xfffffff8;
            do {
              uVar9 = uVar9 - 8;
            } while (uVar9 != 0);
            if (uVar4 == 0) goto LAB_0017e796;
          }
          do {
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
      }
      else {
        (*(code *)PTR_yield_now_00219ff8)();
      }
LAB_0017e796:
      iVar2 = uVar3 * 2;
      uVar3 = uVar3 + 1;
      uVar10 = plVar13[uVar15 + 1];
      uVar17 = uVar17 + iVar2 + 1;
    } while ((uVar10 & 1) == 0);
  }
  lVar12 = uVar15 + 1;
  if (lVar12 == 0x1f) {
    if ((plVar13[1] & 2U) == 0) {
      uVar8 = plVar13[1];
      do {
        uVar10 = uVar8;
        LOCK();
        uVar11 = plVar13[1];
        if (uVar10 == uVar11) {
          plVar13[1] = uVar10 | 4;
          uVar8 = uVar10;
        }
        else {
          uVar8 = uVar11;
        }
        UNLOCK();
      } while (uVar10 != uVar11);
      uVar10 = CONCAT71((int7)(uVar10 >> 8),2);
      if ((uVar8 & 2) == 0) goto LAB_0017edb0;
    }
    if ((plVar13[2] & 2U) == 0) {
      uVar8 = plVar13[2];
      do {
        uVar10 = uVar8;
        LOCK();
        uVar11 = plVar13[2];
        if (uVar10 == uVar11) {
          plVar13[2] = uVar10 | 4;
          uVar8 = uVar10;
        }
        else {
          uVar8 = uVar11;
        }
        UNLOCK();
      } while (uVar10 != uVar11);
      uVar10 = CONCAT71((int7)(uVar10 >> 8),2);
      if ((uVar8 & 2) == 0) goto LAB_0017edb0;
    }
    if ((plVar13[3] & 2U) == 0) {
      uVar8 = plVar13[3];
      do {
        uVar10 = uVar8;
        LOCK();
        uVar11 = plVar13[3];
        if (uVar10 == uVar11) {
          plVar13[3] = uVar10 | 4;
          uVar8 = uVar10;
        }
        else {
          uVar8 = uVar11;
        }
        UNLOCK();
      } while (uVar10 != uVar11);
      uVar10 = CONCAT71((int7)(uVar10 >> 8),2);
      if ((uVar8 & 2) == 0) goto LAB_0017edb0;
    }
    if ((plVar13[4] & 2U) == 0) {
      uVar8 = plVar13[4];
      do {
        uVar10 = uVar8;
        LOCK();
        uVar11 = plVar13[4];
        if (uVar10 == uVar11) {
          plVar13[4] = uVar10 | 4;
          uVar8 = uVar10;
        }
        else {
          uVar8 = uVar11;
        }
        UNLOCK();
      } while (uVar10 != uVar11);
      uVar10 = CONCAT71((int7)(uVar10 >> 8),2);
      if ((uVar8 & 2) == 0) goto LAB_0017edb0;
    }
    if ((plVar13[5] & 2U) == 0) {
      uVar8 = plVar13[5];
      do {
        uVar10 = uVar8;
        LOCK();
        uVar11 = plVar13[5];
        if (uVar10 == uVar11) {
          plVar13[5] = uVar10 | 4;
          uVar8 = uVar10;
        }
        else {
          uVar8 = uVar11;
        }
        UNLOCK();
      } while (uVar10 != uVar11);
      uVar10 = CONCAT71((int7)(uVar10 >> 8),2);
      if ((uVar8 & 2) == 0) goto LAB_0017edb0;
    }
    if ((plVar13[6] & 2U) == 0) {
      uVar8 = plVar13[6];
      do {
        uVar10 = uVar8;
        LOCK();
        uVar11 = plVar13[6];
        if (uVar10 == uVar11) {
          plVar13[6] = uVar10 | 4;
          uVar8 = uVar10;
        }
        else {
          uVar8 = uVar11;
        }
        UNLOCK();
      } while (uVar10 != uVar11);
      uVar10 = CONCAT71((int7)(uVar10 >> 8),2);
      if ((uVar8 & 2) == 0) goto LAB_0017edb0;
    }
    if ((plVar13[7] & 2U) == 0) {
      uVar8 = plVar13[7];
      do {
        uVar10 = uVar8;
        LOCK();
        uVar11 = plVar13[7];
        if (uVar10 == uVar11) {
          plVar13[7] = uVar10 | 4;
          uVar8 = uVar10;
        }
        else {
          uVar8 = uVar11;
        }
        UNLOCK();
      } while (uVar10 != uVar11);
      uVar10 = CONCAT71((int7)(uVar10 >> 8),2);
      if ((uVar8 & 2) == 0) goto LAB_0017edb0;
    }
    if ((plVar13[8] & 2U) == 0) {
      uVar8 = plVar13[8];
      do {
        uVar10 = uVar8;
        LOCK();
        uVar11 = plVar13[8];
        if (uVar10 == uVar11) {
          plVar13[8] = uVar10 | 4;
          uVar8 = uVar10;
        }
        else {
          uVar8 = uVar11;
        }
        UNLOCK();
      } while (uVar10 != uVar11);
      uVar10 = CONCAT71((int7)(uVar10 >> 8),2);
      if ((uVar8 & 2) == 0) goto LAB_0017edb0;
    }
    if ((plVar13[9] & 2U) == 0) {
      uVar8 = plVar13[9];
      do {
        uVar10 = uVar8;
        LOCK();
        uVar11 = plVar13[9];
        if (uVar10 == uVar11) {
          plVar13[9] = uVar10 | 4;
          uVar8 = uVar10;
        }
        else {
          uVar8 = uVar11;
        }
        UNLOCK();
      } while (uVar10 != uVar11);
      uVar10 = CONCAT71((int7)(uVar10 >> 8),2);
      if ((uVar8 & 2) == 0) goto LAB_0017edb0;
    }
    if ((plVar13[10] & 2U) == 0) {
      uVar8 = plVar13[10];
      do {
        uVar10 = uVar8;
        LOCK();
        uVar11 = plVar13[10];
        if (uVar10 == uVar11) {
          plVar13[10] = uVar10 | 4;
          uVar8 = uVar10;
        }
        else {
          uVar8 = uVar11;
        }
        UNLOCK();
      } while (uVar10 != uVar11);
      uVar10 = CONCAT71((int7)(uVar10 >> 8),2);
      if ((uVar8 & 2) == 0) goto LAB_0017edb0;
    }
    if ((plVar13[0xb] & 2U) == 0) {
      uVar8 = plVar13[0xb];
      do {
        uVar10 = uVar8;
        LOCK();
        uVar11 = plVar13[0xb];
        if (uVar10 == uVar11) {
          plVar13[0xb] = uVar10 | 4;
          uVar8 = uVar10;
        }
        else {
          uVar8 = uVar11;
        }
        UNLOCK();
      } while (uVar10 != uVar11);
      uVar10 = CONCAT71((int7)(uVar10 >> 8),2);
      if ((uVar8 & 2) == 0) goto LAB_0017edb0;
    }
    if ((plVar13[0xc] & 2U) == 0) {
      uVar8 = plVar13[0xc];
      do {
        uVar10 = uVar8;
        LOCK();
        uVar11 = plVar13[0xc];
        if (uVar10 == uVar11) {
          plVar13[0xc] = uVar10 | 4;
          uVar8 = uVar10;
        }
        else {
          uVar8 = uVar11;
        }
        UNLOCK();
      } while (uVar10 != uVar11);
      uVar10 = CONCAT71((int7)(uVar10 >> 8),2);
      if ((uVar8 & 2) == 0) goto LAB_0017edb0;
    }
    if ((plVar13[0xd] & 2U) == 0) {
      uVar8 = plVar13[0xd];
      do {
        uVar10 = uVar8;
        LOCK();
        uVar11 = plVar13[0xd];
        if (uVar10 == uVar11) {
          plVar13[0xd] = uVar10 | 4;
          uVar8 = uVar10;
        }
        else {
          uVar8 = uVar11;
        }
        UNLOCK();
      } while (uVar10 != uVar11);
      uVar10 = CONCAT71((int7)(uVar10 >> 8),2);
      if ((uVar8 & 2) == 0) goto LAB_0017edb0;
    }
    if ((plVar13[0xe] & 2U) == 0) {
      uVar8 = plVar13[0xe];
      do {
        uVar10 = uVar8;
        LOCK();
        uVar11 = plVar13[0xe];
        if (uVar10 == uVar11) {
          plVar13[0xe] = uVar10 | 4;
          uVar8 = uVar10;
        }
        else {
          uVar8 = uVar11;
        }
        UNLOCK();
      } while (uVar10 != uVar11);
      uVar10 = CONCAT71((int7)(uVar10 >> 8),2);
      if ((uVar8 & 2) == 0) goto LAB_0017edb0;
    }
    if ((plVar13[0xf] & 2U) == 0) {
      uVar8 = plVar13[0xf];
      do {
        uVar10 = uVar8;
        LOCK();
        uVar11 = plVar13[0xf];
        if (uVar10 == uVar11) {
          plVar13[0xf] = uVar10 | 4;
          uVar8 = uVar10;
        }
        else {
          uVar8 = uVar11;
        }
        UNLOCK();
      } while (uVar10 != uVar11);
      uVar10 = CONCAT71((int7)(uVar10 >> 8),2);
      if ((uVar8 & 2) == 0) goto LAB_0017edb0;
    }
    if ((plVar13[0x10] & 2U) == 0) {
      uVar8 = plVar13[0x10];
      do {
        uVar10 = uVar8;
        LOCK();
        uVar11 = plVar13[0x10];
        if (uVar10 == uVar11) {
          plVar13[0x10] = uVar10 | 4;
          uVar8 = uVar10;
        }
        else {
          uVar8 = uVar11;
        }
        UNLOCK();
      } while (uVar10 != uVar11);
      uVar10 = CONCAT71((int7)(uVar10 >> 8),2);
      if ((uVar8 & 2) == 0) goto LAB_0017edb0;
    }
    if ((plVar13[0x11] & 2U) == 0) {
      uVar8 = plVar13[0x11];
      do {
        uVar10 = uVar8;
        LOCK();
        uVar11 = plVar13[0x11];
        if (uVar10 == uVar11) {
          plVar13[0x11] = uVar10 | 4;
          uVar8 = uVar10;
        }
        else {
          uVar8 = uVar11;
        }
        UNLOCK();
      } while (uVar10 != uVar11);
      uVar10 = CONCAT71((int7)(uVar10 >> 8),2);
      if ((uVar8 & 2) == 0) goto LAB_0017edb0;
    }
    if ((plVar13[0x12] & 2U) == 0) {
      uVar8 = plVar13[0x12];
      do {
        uVar10 = uVar8;
        LOCK();
        uVar11 = plVar13[0x12];
        if (uVar10 == uVar11) {
          plVar13[0x12] = uVar10 | 4;
          uVar8 = uVar10;
        }
        else {
          uVar8 = uVar11;
        }
        UNLOCK();
      } while (uVar10 != uVar11);
      uVar10 = CONCAT71((int7)(uVar10 >> 8),2);
      if ((uVar8 & 2) == 0) goto LAB_0017edb0;
    }
    if ((plVar13[0x13] & 2U) == 0) {
      uVar8 = plVar13[0x13];
      do {
        uVar10 = uVar8;
        LOCK();
        uVar11 = plVar13[0x13];
        if (uVar10 == uVar11) {
          plVar13[0x13] = uVar10 | 4;
          uVar8 = uVar10;
        }
        else {
          uVar8 = uVar11;
        }
        UNLOCK();
      } while (uVar10 != uVar11);
      uVar10 = CONCAT71((int7)(uVar10 >> 8),2);
      if ((uVar8 & 2) == 0) goto LAB_0017edb0;
    }
    if ((plVar13[0x14] & 2U) == 0) {
      uVar8 = plVar13[0x14];
      do {
        uVar10 = uVar8;
        LOCK();
        uVar11 = plVar13[0x14];
        if (uVar10 == uVar11) {
          plVar13[0x14] = uVar10 | 4;
          uVar8 = uVar10;
        }
        else {
          uVar8 = uVar11;
        }
        UNLOCK();
      } while (uVar10 != uVar11);
      uVar10 = CONCAT71((int7)(uVar10 >> 8),2);
      if ((uVar8 & 2) == 0) goto LAB_0017edb0;
    }
    if ((plVar13[0x15] & 2U) == 0) {
      uVar8 = plVar13[0x15];
      do {
        uVar10 = uVar8;
        LOCK();
        uVar11 = plVar13[0x15];
        if (uVar10 == uVar11) {
          plVar13[0x15] = uVar10 | 4;
          uVar8 = uVar10;
        }
        else {
          uVar8 = uVar11;
        }
        UNLOCK();
      } while (uVar10 != uVar11);
      uVar10 = CONCAT71((int7)(uVar10 >> 8),2);
      if ((uVar8 & 2) == 0) goto LAB_0017edb0;
    }
    if ((plVar13[0x16] & 2U) == 0) {
      uVar8 = plVar13[0x16];
      do {
        uVar10 = uVar8;
        LOCK();
        uVar11 = plVar13[0x16];
        if (uVar10 == uVar11) {
          plVar13[0x16] = uVar10 | 4;
          uVar8 = uVar10;
        }
        else {
          uVar8 = uVar11;
        }
        UNLOCK();
      } while (uVar10 != uVar11);
      uVar10 = CONCAT71((int7)(uVar10 >> 8),2);
      if ((uVar8 & 2) == 0) goto LAB_0017edb0;
    }
    if ((plVar13[0x17] & 2U) == 0) {
      uVar8 = plVar13[0x17];
      do {
        uVar10 = uVar8;
        LOCK();
        uVar11 = plVar13[0x17];
        if (uVar10 == uVar11) {
          plVar13[0x17] = uVar10 | 4;
          uVar8 = uVar10;
        }
        else {
          uVar8 = uVar11;
        }
        UNLOCK();
      } while (uVar10 != uVar11);
      uVar10 = CONCAT71((int7)(uVar10 >> 8),2);
      if ((uVar8 & 2) == 0) goto LAB_0017edb0;
    }
    if ((plVar13[0x18] & 2U) == 0) {
      uVar8 = plVar13[0x18];
      do {
        uVar10 = uVar8;
        LOCK();
        uVar11 = plVar13[0x18];
        if (uVar10 == uVar11) {
          plVar13[0x18] = uVar10 | 4;
          uVar8 = uVar10;
        }
        else {
          uVar8 = uVar11;
        }
        UNLOCK();
      } while (uVar10 != uVar11);
      uVar10 = CONCAT71((int7)(uVar10 >> 8),2);
      if ((uVar8 & 2) == 0) goto LAB_0017edb0;
    }
    if ((plVar13[0x19] & 2U) == 0) {
      uVar8 = plVar13[0x19];
      do {
        uVar10 = uVar8;
        LOCK();
        uVar11 = plVar13[0x19];
        if (uVar10 == uVar11) {
          plVar13[0x19] = uVar10 | 4;
          uVar8 = uVar10;
        }
        else {
          uVar8 = uVar11;
        }
        UNLOCK();
      } while (uVar10 != uVar11);
      uVar10 = CONCAT71((int7)(uVar10 >> 8),2);
      if ((uVar8 & 2) == 0) goto LAB_0017edb0;
    }
    if ((plVar13[0x1a] & 2U) == 0) {
      uVar8 = plVar13[0x1a];
      do {
        uVar10 = uVar8;
        LOCK();
        uVar11 = plVar13[0x1a];
        if (uVar10 == uVar11) {
          plVar13[0x1a] = uVar10 | 4;
          uVar8 = uVar10;
        }
        else {
          uVar8 = uVar11;
        }
        UNLOCK();
      } while (uVar10 != uVar11);
      uVar10 = CONCAT71((int7)(uVar10 >> 8),2);
      if ((uVar8 & 2) == 0) goto LAB_0017edb0;
    }
    if ((plVar13[0x1b] & 2U) == 0) {
      uVar8 = plVar13[0x1b];
      do {
        uVar10 = uVar8;
        LOCK();
        uVar11 = plVar13[0x1b];
        if (uVar10 == uVar11) {
          plVar13[0x1b] = uVar10 | 4;
          uVar8 = uVar10;
        }
        else {
          uVar8 = uVar11;
        }
        UNLOCK();
      } while (uVar10 != uVar11);
      uVar10 = CONCAT71((int7)(uVar10 >> 8),2);
      if ((uVar8 & 2) == 0) goto LAB_0017edb0;
    }
    if ((plVar13[0x1c] & 2U) == 0) {
      uVar8 = plVar13[0x1c];
      do {
        uVar10 = uVar8;
        LOCK();
        uVar11 = plVar13[0x1c];
        if (uVar10 == uVar11) {
          plVar13[0x1c] = uVar10 | 4;
          uVar8 = uVar10;
        }
        else {
          uVar8 = uVar11;
        }
        UNLOCK();
      } while (uVar10 != uVar11);
      uVar10 = CONCAT71((int7)(uVar10 >> 8),2);
      if ((uVar8 & 2) == 0) goto LAB_0017edb0;
    }
    if ((plVar13[0x1d] & 2U) == 0) {
      uVar8 = plVar13[0x1d];
      do {
        uVar10 = uVar8;
        LOCK();
        uVar11 = plVar13[0x1d];
        if (uVar10 == uVar11) {
          plVar13[0x1d] = uVar10 | 4;
          uVar8 = uVar10;
        }
        else {
          uVar8 = uVar11;
        }
        UNLOCK();
      } while (uVar10 != uVar11);
      uVar10 = CONCAT71((int7)(uVar10 >> 8),2);
      if ((uVar8 & 2) == 0) goto LAB_0017edb0;
    }
    if ((plVar13[0x1e] & 2U) == 0) {
      uVar8 = plVar13[0x1e];
      do {
        uVar10 = uVar8;
        LOCK();
        uVar11 = plVar13[0x1e];
        if (uVar10 == uVar11) {
          plVar13[0x1e] = uVar10 | 4;
          uVar8 = uVar10;
        }
        else {
          uVar8 = uVar11;
        }
        UNLOCK();
      } while (uVar10 != uVar11);
      uVar10 = CONCAT71((int7)(uVar10 >> 8),2);
      if ((uVar8 & 2) == 0) goto LAB_0017edb0;
    }
  }
  else {
    uVar8 = plVar13[uVar15 + 1];
    do {
      uVar10 = uVar8;
      LOCK();
      uVar11 = plVar13[uVar15 + 1];
      if (uVar10 == uVar11) {
        plVar13[uVar15 + 1] = uVar10 | 2;
        uVar8 = uVar10;
      }
      else {
        uVar8 = uVar11;
      }
      UNLOCK();
    } while (uVar10 != uVar11);
    uVar10 = CONCAT71((int7)(uVar10 >> 8),2);
    if ((uVar8 & 4) == 0) goto LAB_0017edb0;
    if (uVar14 < 0x1d) {
      do {
        if ((plVar13[lVar12 + 1] & 2U) == 0) {
          uVar8 = plVar13[lVar12 + 1];
          do {
            LOCK();
            uVar11 = plVar13[lVar12 + 1];
            bVar18 = uVar8 == uVar11;
            if (bVar18) {
              plVar13[lVar12 + 1] = uVar8 | 4;
            }
            else {
              uVar8 = uVar11;
            }
            UNLOCK();
          } while (!bVar18);
          if ((uVar8 & 2) == 0) goto LAB_0017edb0;
        }
        lVar12 = lVar12 + 1;
      } while (lVar12 != 0x1e);
    }
  }
  (*(code *)PTR___rust_dealloc_00219c40)(uVar10,8);
  uVar10 = CONCAT71((int7)(uVar10 >> 8),2);
LAB_0017edb0:
  return uVar10 & 0xffffffff;
}


