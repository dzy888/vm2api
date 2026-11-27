// 00687f10 recv

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
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  longlong *in_FS_OFFSET;
  bool bVar17;
  longlong local_a0;
  uint local_98;
  longlong *local_90;
  ulonglong *local_88;
  longlong *plStack_80;
  longlong *local_78;
  ulonglong *local_70;
  longlong *plStack_68;
  longlong *local_60;
  longlong local_58 [2];
  longlong *local_48;
  ulonglong uStack_40;
  undefined8 local_38;
  
  local_60 = (longlong *)(*in_FS_OFFSET + -0x20);
  local_48 = (longlong *)0x0;
  uStack_40 = 0;
  local_58[0] = 0;
  local_58[1] = 0;
  local_38 = 0;
  local_a0 = param_2;
  local_98 = param_3;
LAB_00687f55:
  uVar8 = *param_1;
  plVar6 = (longlong *)param_1[1];
  uVar16 = 0;
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
    uVar13 = (uint)uVar11 & 0x1f;
    uVar14 = (ulonglong)uVar13;
    if (uVar14 == 0x1f) {
      if (uVar4 < 7) {
        if (uVar4 != 0) {
          uVar3 = uVar16 & 7;
          if (6 < uVar16 - 1) {
            uVar13 = uVar16 & 0xfffffff8;
            do {
              uVar13 = uVar13 - 8;
            } while (uVar13 != 0);
            if ((uVar16 & 7) == 0) goto LAB_00687f76;
          }
          do {
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
        }
      }
      else {
LAB_00687f70:
        (*(code *)PTR_yield_now_00799b28)();
      }
    }
    else {
      uVar15 = uVar8 + 2;
      if ((uVar8 & 1) == 0) {
        LOCK();
        UNLOCK();
        uVar1 = param_1[0x10];
        if (uVar11 == uVar1 >> 1) break;
        uVar15 = uVar15 | 0x3f < (uVar1 ^ uVar8);
      }
      if (plVar6 == (longlong *)0x0) {
        if (6 < uVar4) goto LAB_00687f70;
        if (uVar4 != 0) {
          uVar3 = uVar16 & 7;
          if (6 < uVar16 - 1) {
            uVar13 = uVar16 & 0xfffffff8;
            do {
              uVar13 = uVar13 - 8;
            } while (uVar13 != 0);
            if ((uVar16 & 7) == 0) goto LAB_00687f76;
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
          *param_1 = uVar15;
        }
        UNLOCK();
        if (uVar8 == uVar11) {
          if (uVar13 != 0x1e) goto LAB_0068829d;
          plVar7 = (longlong *)*plVar6;
          if (plVar7 != (longlong *)0x0) goto LAB_0068827f;
          uVar3 = 0;
          uVar16 = 0;
          goto LAB_00688960;
        }
        if (uVar4 != 0) {
          uVar3 = (int)uVar10 * (int)uVar10;
          if (7 < uVar3) {
            uVar13 = uVar3 & 0x38;
            do {
              uVar13 = uVar13 - 8;
            } while (uVar13 != 0);
            if ((uVar3 & 7) == 0) goto LAB_00687f76;
          }
          uVar3 = uVar3 & 5;
          do {
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
        }
      }
    }
LAB_00687f76:
    uVar8 = *param_1;
    plVar6 = (longlong *)param_1[1];
    uVar11 = (ulonglong)(uVar4 + 1);
    uVar16 = uVar16 + uVar4 * 2 + 1;
  } while( true );
  if ((uVar1 & 1) != 0) {
    uVar10 = CONCAT71((int7)(uVar10 >> 8),1);
    goto LAB_006888e0;
  }
  if (local_98 != 0xffffffff) {
    lVar5 = (*(code *)PTR_now_00799250)();
    if (lVar5 == lVar12) {
      if (uVar3 <= (uint)uVar11) goto LAB_006889af;
    }
    else if (lVar12 <= lVar5) goto LAB_006889af;
  }
  local_78 = local_58;
  plStack_68 = &local_a0;
  plVar6 = local_60;
  local_70 = param_1;
  if (((char)in_FS_OFFSET[-3] == '\x01') ||
     (plVar6 = (longlong *)
               <std[6c98fd8553dbae28]::sys::thread_local::native::lazy::Storage<core[c0acaeba6ab4c2e0]::cell::Cell<core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpmc::context::Context>>,()>>
               ::get_or_init_slow::
               <<std[6c98fd8553dbae28]::sync::mpmc::context::Context>::with::CONTEXT::__rust_std_internal_init_fn>
                         (*in_FS_OFFSET + -0x20,0), plVar6 != (longlong *)0x0)) {
    lVar12 = *plVar6;
    *plVar6 = 0;
    if (lVar12 == 0) {
      plVar6 = (longlong *)(*(code *)PTR_new_007995e8)();
      local_78 = (longlong *)0x0;
      local_90 = local_58;
      plStack_80 = &local_a0;
      local_88 = param_1;
      <std[6c98fd8553dbae28]::sync::mpmc::list::Channel<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>
      ::recv::_closure_1_(&local_90,plVar6);
      LOCK();
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
        (*(code *)PTR_drop_slow_007995f0)();
      }
    }
    else {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      *(undefined8 *)(lVar12 + 0x20) = 0;
      local_78 = (longlong *)0x0;
      local_90 = local_58;
      local_88 = local_70;
      plStack_80 = plStack_68;
      <std[6c98fd8553dbae28]::sync::mpmc::list::Channel<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>
      ::recv::_closure_1_(&local_90,lVar12);
      local_90 = (longlong *)*plVar6;
      *plVar6 = lVar12;
      if (local_90 != (longlong *)0x0) {
        LOCK();
        *local_90 = *local_90 + -1;
        UNLOCK();
        if (*local_90 == 0) {
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
  goto LAB_00687f55;
LAB_006889af:
  uVar10 = 0;
  goto LAB_006888e0;
LAB_00688960:
  do {
    if (uVar16 < 7) {
      if (uVar16 != 0) {
        uVar4 = uVar3 & 7;
        if (6 < uVar3 - 1) {
          uVar9 = uVar3 & 0xfffffff8;
          do {
            uVar9 = uVar9 - 8;
          } while (uVar9 != 0);
          if ((uVar3 & 7) == 0) goto LAB_00688946;
        }
        do {
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
    }
    else {
      (*(code *)PTR_yield_now_00799b28)();
    }
LAB_00688946:
    iVar2 = uVar16 * 2;
    uVar16 = uVar16 + 1;
    plVar7 = (longlong *)*plVar6;
    uVar3 = uVar3 + iVar2 + 1;
  } while (plVar7 == (longlong *)0x0);
LAB_0068827f:
  uVar10 = (uVar15 & 0xfffffffffffffffe) + (ulonglong)(*plVar7 != 0) + 2;
  param_1[1] = (ulonglong)plVar7;
  *param_1 = uVar10;
LAB_0068829d:
  local_48 = plVar6;
  uStack_40 = uVar14;
  if ((plVar6[uVar14 + 1] & 1U) == 0) {
    uVar16 = 0;
    uVar3 = 0;
    do {
      if (uVar3 < 7) {
        if (uVar3 != 0) {
          uVar4 = uVar16 & 7;
          if (6 < uVar16 - 1) {
            uVar9 = uVar16 & 0xfffffff8;
            do {
              uVar9 = uVar9 - 8;
            } while (uVar9 != 0);
            if (uVar4 == 0) goto LAB_006882c6;
          }
          do {
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
      }
      else {
        (*(code *)PTR_yield_now_00799b28)();
      }
LAB_006882c6:
      iVar2 = uVar3 * 2;
      uVar3 = uVar3 + 1;
      uVar10 = plVar6[uVar14 + 1];
      uVar16 = uVar16 + iVar2 + 1;
    } while ((uVar10 & 1) == 0);
  }
  lVar12 = uVar14 + 1;
  if (lVar12 == 0x1f) {
    if ((plVar6[1] & 2U) == 0) {
      uVar8 = plVar6[1];
      do {
        uVar10 = uVar8;
        LOCK();
        uVar11 = plVar6[1];
        if (uVar10 == uVar11) {
          plVar6[1] = uVar10 | 4;
          uVar8 = uVar10;
        }
        else {
          uVar8 = uVar11;
        }
        UNLOCK();
      } while (uVar10 != uVar11);
      uVar10 = CONCAT71((int7)(uVar10 >> 8),2);
      if ((uVar8 & 2) == 0) goto LAB_006888e0;
    }
    if ((plVar6[2] & 2U) == 0) {
      uVar8 = plVar6[2];
      do {
        uVar10 = uVar8;
        LOCK();
        uVar11 = plVar6[2];
        if (uVar10 == uVar11) {
          plVar6[2] = uVar10 | 4;
          uVar8 = uVar10;
        }
        else {
          uVar8 = uVar11;
        }
        UNLOCK();
      } while (uVar10 != uVar11);
      uVar10 = CONCAT71((int7)(uVar10 >> 8),2);
      if ((uVar8 & 2) == 0) goto LAB_006888e0;
    }
    if ((plVar6[3] & 2U) == 0) {
      uVar8 = plVar6[3];
      do {
        uVar10 = uVar8;
        LOCK();
        uVar11 = plVar6[3];
        if (uVar10 == uVar11) {
          plVar6[3] = uVar10 | 4;
          uVar8 = uVar10;
        }
        else {
          uVar8 = uVar11;
        }
        UNLOCK();
      } while (uVar10 != uVar11);
      uVar10 = CONCAT71((int7)(uVar10 >> 8),2);
      if ((uVar8 & 2) == 0) goto LAB_006888e0;
    }
    if ((plVar6[4] & 2U) == 0) {
      uVar8 = plVar6[4];
      do {
        uVar10 = uVar8;
        LOCK();
        uVar11 = plVar6[4];
        if (uVar10 == uVar11) {
          plVar6[4] = uVar10 | 4;
          uVar8 = uVar10;
        }
        else {
          uVar8 = uVar11;
        }
        UNLOCK();
      } while (uVar10 != uVar11);
      uVar10 = CONCAT71((int7)(uVar10 >> 8),2);
      if ((uVar8 & 2) == 0) goto LAB_006888e0;
    }
    if ((plVar6[5] & 2U) == 0) {
      uVar8 = plVar6[5];
      do {
        uVar10 = uVar8;
        LOCK();
        uVar11 = plVar6[5];
        if (uVar10 == uVar11) {
          plVar6[5] = uVar10 | 4;
          uVar8 = uVar10;
        }
        else {
          uVar8 = uVar11;
        }
        UNLOCK();
      } while (uVar10 != uVar11);
      uVar10 = CONCAT71((int7)(uVar10 >> 8),2);
      if ((uVar8 & 2) == 0) goto LAB_006888e0;
    }
    if ((plVar6[6] & 2U) == 0) {
      uVar8 = plVar6[6];
      do {
        uVar10 = uVar8;
        LOCK();
        uVar11 = plVar6[6];
        if (uVar10 == uVar11) {
          plVar6[6] = uVar10 | 4;
          uVar8 = uVar10;
        }
        else {
          uVar8 = uVar11;
        }
        UNLOCK();
      } while (uVar10 != uVar11);
      uVar10 = CONCAT71((int7)(uVar10 >> 8),2);
      if ((uVar8 & 2) == 0) goto LAB_006888e0;
    }
    if ((plVar6[7] & 2U) == 0) {
      uVar8 = plVar6[7];
      do {
        uVar10 = uVar8;
        LOCK();
        uVar11 = plVar6[7];
        if (uVar10 == uVar11) {
          plVar6[7] = uVar10 | 4;
          uVar8 = uVar10;
        }
        else {
          uVar8 = uVar11;
        }
        UNLOCK();
      } while (uVar10 != uVar11);
      uVar10 = CONCAT71((int7)(uVar10 >> 8),2);
      if ((uVar8 & 2) == 0) goto LAB_006888e0;
    }
    if ((plVar6[8] & 2U) == 0) {
      uVar8 = plVar6[8];
      do {
        uVar10 = uVar8;
        LOCK();
        uVar11 = plVar6[8];
        if (uVar10 == uVar11) {
          plVar6[8] = uVar10 | 4;
          uVar8 = uVar10;
        }
        else {
          uVar8 = uVar11;
        }
        UNLOCK();
      } while (uVar10 != uVar11);
      uVar10 = CONCAT71((int7)(uVar10 >> 8),2);
      if ((uVar8 & 2) == 0) goto LAB_006888e0;
    }
    if ((plVar6[9] & 2U) == 0) {
      uVar8 = plVar6[9];
      do {
        uVar10 = uVar8;
        LOCK();
        uVar11 = plVar6[9];
        if (uVar10 == uVar11) {
          plVar6[9] = uVar10 | 4;
          uVar8 = uVar10;
        }
        else {
          uVar8 = uVar11;
        }
        UNLOCK();
      } while (uVar10 != uVar11);
      uVar10 = CONCAT71((int7)(uVar10 >> 8),2);
      if ((uVar8 & 2) == 0) goto LAB_006888e0;
    }
    if ((plVar6[10] & 2U) == 0) {
      uVar8 = plVar6[10];
      do {
        uVar10 = uVar8;
        LOCK();
        uVar11 = plVar6[10];
        if (uVar10 == uVar11) {
          plVar6[10] = uVar10 | 4;
          uVar8 = uVar10;
        }
        else {
          uVar8 = uVar11;
        }
        UNLOCK();
      } while (uVar10 != uVar11);
      uVar10 = CONCAT71((int7)(uVar10 >> 8),2);
      if ((uVar8 & 2) == 0) goto LAB_006888e0;
    }
    if ((plVar6[0xb] & 2U) == 0) {
      uVar8 = plVar6[0xb];
      do {
        uVar10 = uVar8;
        LOCK();
        uVar11 = plVar6[0xb];
        if (uVar10 == uVar11) {
          plVar6[0xb] = uVar10 | 4;
          uVar8 = uVar10;
        }
        else {
          uVar8 = uVar11;
        }
        UNLOCK();
      } while (uVar10 != uVar11);
      uVar10 = CONCAT71((int7)(uVar10 >> 8),2);
      if ((uVar8 & 2) == 0) goto LAB_006888e0;
    }
    if ((plVar6[0xc] & 2U) == 0) {
      uVar8 = plVar6[0xc];
      do {
        uVar10 = uVar8;
        LOCK();
        uVar11 = plVar6[0xc];
        if (uVar10 == uVar11) {
          plVar6[0xc] = uVar10 | 4;
          uVar8 = uVar10;
        }
        else {
          uVar8 = uVar11;
        }
        UNLOCK();
      } while (uVar10 != uVar11);
      uVar10 = CONCAT71((int7)(uVar10 >> 8),2);
      if ((uVar8 & 2) == 0) goto LAB_006888e0;
    }
    if ((plVar6[0xd] & 2U) == 0) {
      uVar8 = plVar6[0xd];
      do {
        uVar10 = uVar8;
        LOCK();
        uVar11 = plVar6[0xd];
        if (uVar10 == uVar11) {
          plVar6[0xd] = uVar10 | 4;
          uVar8 = uVar10;
        }
        else {
          uVar8 = uVar11;
        }
        UNLOCK();
      } while (uVar10 != uVar11);
      uVar10 = CONCAT71((int7)(uVar10 >> 8),2);
      if ((uVar8 & 2) == 0) goto LAB_006888e0;
    }
    if ((plVar6[0xe] & 2U) == 0) {
      uVar8 = plVar6[0xe];
      do {
        uVar10 = uVar8;
        LOCK();
        uVar11 = plVar6[0xe];
        if (uVar10 == uVar11) {
          plVar6[0xe] = uVar10 | 4;
          uVar8 = uVar10;
        }
        else {
          uVar8 = uVar11;
        }
        UNLOCK();
      } while (uVar10 != uVar11);
      uVar10 = CONCAT71((int7)(uVar10 >> 8),2);
      if ((uVar8 & 2) == 0) goto LAB_006888e0;
    }
    if ((plVar6[0xf] & 2U) == 0) {
      uVar8 = plVar6[0xf];
      do {
        uVar10 = uVar8;
        LOCK();
        uVar11 = plVar6[0xf];
        if (uVar10 == uVar11) {
          plVar6[0xf] = uVar10 | 4;
          uVar8 = uVar10;
        }
        else {
          uVar8 = uVar11;
        }
        UNLOCK();
      } while (uVar10 != uVar11);
      uVar10 = CONCAT71((int7)(uVar10 >> 8),2);
      if ((uVar8 & 2) == 0) goto LAB_006888e0;
    }
    if ((plVar6[0x10] & 2U) == 0) {
      uVar8 = plVar6[0x10];
      do {
        uVar10 = uVar8;
        LOCK();
        uVar11 = plVar6[0x10];
        if (uVar10 == uVar11) {
          plVar6[0x10] = uVar10 | 4;
          uVar8 = uVar10;
        }
        else {
          uVar8 = uVar11;
        }
        UNLOCK();
      } while (uVar10 != uVar11);
      uVar10 = CONCAT71((int7)(uVar10 >> 8),2);
      if ((uVar8 & 2) == 0) goto LAB_006888e0;
    }
    if ((plVar6[0x11] & 2U) == 0) {
      uVar8 = plVar6[0x11];
      do {
        uVar10 = uVar8;
        LOCK();
        uVar11 = plVar6[0x11];
        if (uVar10 == uVar11) {
          plVar6[0x11] = uVar10 | 4;
          uVar8 = uVar10;
        }
        else {
          uVar8 = uVar11;
        }
        UNLOCK();
      } while (uVar10 != uVar11);
      uVar10 = CONCAT71((int7)(uVar10 >> 8),2);
      if ((uVar8 & 2) == 0) goto LAB_006888e0;
    }
    if ((plVar6[0x12] & 2U) == 0) {
      uVar8 = plVar6[0x12];
      do {
        uVar10 = uVar8;
        LOCK();
        uVar11 = plVar6[0x12];
        if (uVar10 == uVar11) {
          plVar6[0x12] = uVar10 | 4;
          uVar8 = uVar10;
        }
        else {
          uVar8 = uVar11;
        }
        UNLOCK();
      } while (uVar10 != uVar11);
      uVar10 = CONCAT71((int7)(uVar10 >> 8),2);
      if ((uVar8 & 2) == 0) goto LAB_006888e0;
    }
    if ((plVar6[0x13] & 2U) == 0) {
      uVar8 = plVar6[0x13];
      do {
        uVar10 = uVar8;
        LOCK();
        uVar11 = plVar6[0x13];
        if (uVar10 == uVar11) {
          plVar6[0x13] = uVar10 | 4;
          uVar8 = uVar10;
        }
        else {
          uVar8 = uVar11;
        }
        UNLOCK();
      } while (uVar10 != uVar11);
      uVar10 = CONCAT71((int7)(uVar10 >> 8),2);
      if ((uVar8 & 2) == 0) goto LAB_006888e0;
    }
    if ((plVar6[0x14] & 2U) == 0) {
      uVar8 = plVar6[0x14];
      do {
        uVar10 = uVar8;
        LOCK();
        uVar11 = plVar6[0x14];
        if (uVar10 == uVar11) {
          plVar6[0x14] = uVar10 | 4;
          uVar8 = uVar10;
        }
        else {
          uVar8 = uVar11;
        }
        UNLOCK();
      } while (uVar10 != uVar11);
      uVar10 = CONCAT71((int7)(uVar10 >> 8),2);
      if ((uVar8 & 2) == 0) goto LAB_006888e0;
    }
    if ((plVar6[0x15] & 2U) == 0) {
      uVar8 = plVar6[0x15];
      do {
        uVar10 = uVar8;
        LOCK();
        uVar11 = plVar6[0x15];
        if (uVar10 == uVar11) {
          plVar6[0x15] = uVar10 | 4;
          uVar8 = uVar10;
        }
        else {
          uVar8 = uVar11;
        }
        UNLOCK();
      } while (uVar10 != uVar11);
      uVar10 = CONCAT71((int7)(uVar10 >> 8),2);
      if ((uVar8 & 2) == 0) goto LAB_006888e0;
    }
    if ((plVar6[0x16] & 2U) == 0) {
      uVar8 = plVar6[0x16];
      do {
        uVar10 = uVar8;
        LOCK();
        uVar11 = plVar6[0x16];
        if (uVar10 == uVar11) {
          plVar6[0x16] = uVar10 | 4;
          uVar8 = uVar10;
        }
        else {
          uVar8 = uVar11;
        }
        UNLOCK();
      } while (uVar10 != uVar11);
      uVar10 = CONCAT71((int7)(uVar10 >> 8),2);
      if ((uVar8 & 2) == 0) goto LAB_006888e0;
    }
    if ((plVar6[0x17] & 2U) == 0) {
      uVar8 = plVar6[0x17];
      do {
        uVar10 = uVar8;
        LOCK();
        uVar11 = plVar6[0x17];
        if (uVar10 == uVar11) {
          plVar6[0x17] = uVar10 | 4;
          uVar8 = uVar10;
        }
        else {
          uVar8 = uVar11;
        }
        UNLOCK();
      } while (uVar10 != uVar11);
      uVar10 = CONCAT71((int7)(uVar10 >> 8),2);
      if ((uVar8 & 2) == 0) goto LAB_006888e0;
    }
    if ((plVar6[0x18] & 2U) == 0) {
      uVar8 = plVar6[0x18];
      do {
        uVar10 = uVar8;
        LOCK();
        uVar11 = plVar6[0x18];
        if (uVar10 == uVar11) {
          plVar6[0x18] = uVar10 | 4;
          uVar8 = uVar10;
        }
        else {
          uVar8 = uVar11;
        }
        UNLOCK();
      } while (uVar10 != uVar11);
      uVar10 = CONCAT71((int7)(uVar10 >> 8),2);
      if ((uVar8 & 2) == 0) goto LAB_006888e0;
    }
    if ((plVar6[0x19] & 2U) == 0) {
      uVar8 = plVar6[0x19];
      do {
        uVar10 = uVar8;
        LOCK();
        uVar11 = plVar6[0x19];
        if (uVar10 == uVar11) {
          plVar6[0x19] = uVar10 | 4;
          uVar8 = uVar10;
        }
        else {
          uVar8 = uVar11;
        }
        UNLOCK();
      } while (uVar10 != uVar11);
      uVar10 = CONCAT71((int7)(uVar10 >> 8),2);
      if ((uVar8 & 2) == 0) goto LAB_006888e0;
    }
    if ((plVar6[0x1a] & 2U) == 0) {
      uVar8 = plVar6[0x1a];
      do {
        uVar10 = uVar8;
        LOCK();
        uVar11 = plVar6[0x1a];
        if (uVar10 == uVar11) {
          plVar6[0x1a] = uVar10 | 4;
          uVar8 = uVar10;
        }
        else {
          uVar8 = uVar11;
        }
        UNLOCK();
      } while (uVar10 != uVar11);
      uVar10 = CONCAT71((int7)(uVar10 >> 8),2);
      if ((uVar8 & 2) == 0) goto LAB_006888e0;
    }
    if ((plVar6[0x1b] & 2U) == 0) {
      uVar8 = plVar6[0x1b];
      do {
        uVar10 = uVar8;
        LOCK();
        uVar11 = plVar6[0x1b];
        if (uVar10 == uVar11) {
          plVar6[0x1b] = uVar10 | 4;
          uVar8 = uVar10;
        }
        else {
          uVar8 = uVar11;
        }
        UNLOCK();
      } while (uVar10 != uVar11);
      uVar10 = CONCAT71((int7)(uVar10 >> 8),2);
      if ((uVar8 & 2) == 0) goto LAB_006888e0;
    }
    if ((plVar6[0x1c] & 2U) == 0) {
      uVar8 = plVar6[0x1c];
      do {
        uVar10 = uVar8;
        LOCK();
        uVar11 = plVar6[0x1c];
        if (uVar10 == uVar11) {
          plVar6[0x1c] = uVar10 | 4;
          uVar8 = uVar10;
        }
        else {
          uVar8 = uVar11;
        }
        UNLOCK();
      } while (uVar10 != uVar11);
      uVar10 = CONCAT71((int7)(uVar10 >> 8),2);
      if ((uVar8 & 2) == 0) goto LAB_006888e0;
    }
    if ((plVar6[0x1d] & 2U) == 0) {
      uVar8 = plVar6[0x1d];
      do {
        uVar10 = uVar8;
        LOCK();
        uVar11 = plVar6[0x1d];
        if (uVar10 == uVar11) {
          plVar6[0x1d] = uVar10 | 4;
          uVar8 = uVar10;
        }
        else {
          uVar8 = uVar11;
        }
        UNLOCK();
      } while (uVar10 != uVar11);
      uVar10 = CONCAT71((int7)(uVar10 >> 8),2);
      if ((uVar8 & 2) == 0) goto LAB_006888e0;
    }
    if ((plVar6[0x1e] & 2U) == 0) {
      uVar8 = plVar6[0x1e];
      do {
        uVar10 = uVar8;
        LOCK();
        uVar11 = plVar6[0x1e];
        if (uVar10 == uVar11) {
          plVar6[0x1e] = uVar10 | 4;
          uVar8 = uVar10;
        }
        else {
          uVar8 = uVar11;
        }
        UNLOCK();
      } while (uVar10 != uVar11);
      uVar10 = CONCAT71((int7)(uVar10 >> 8),2);
      if ((uVar8 & 2) == 0) goto LAB_006888e0;
    }
  }
  else {
    uVar8 = plVar6[uVar14 + 1];
    do {
      uVar10 = uVar8;
      LOCK();
      uVar11 = plVar6[uVar14 + 1];
      if (uVar10 == uVar11) {
        plVar6[uVar14 + 1] = uVar10 | 2;
        uVar8 = uVar10;
      }
      else {
        uVar8 = uVar11;
      }
      UNLOCK();
    } while (uVar10 != uVar11);
    uVar10 = CONCAT71((int7)(uVar10 >> 8),2);
    if ((uVar8 & 4) == 0) goto LAB_006888e0;
    if (uVar13 < 0x1d) {
      do {
        if ((plVar6[lVar12 + 1] & 2U) == 0) {
          uVar8 = plVar6[lVar12 + 1];
          do {
            LOCK();
            uVar11 = plVar6[lVar12 + 1];
            bVar17 = uVar8 == uVar11;
            if (bVar17) {
              plVar6[lVar12 + 1] = uVar8 | 4;
            }
            else {
              uVar8 = uVar11;
            }
            UNLOCK();
          } while (!bVar17);
          if ((uVar8 & 2) == 0) goto LAB_006888e0;
        }
        lVar12 = lVar12 + 1;
      } while (lVar12 != 0x1e);
    }
  }
  (*(code *)PTR___rust_dealloc_00798fc8)(uVar10,8);
  uVar10 = CONCAT71((int7)(uVar10 >> 8),2);
LAB_006888e0:
  return uVar10 & 0xffffffff;
}


