// 006e0a00 poll_notified

/* <tokio[d7d91d38da47d894]::sync::notify::NotifiedProject>::poll_notified */

undefined8 __rustcall
<tokio[d7d91d38da47d894]::sync::notify::NotifiedProject>::poll_notified
          (undefined8 *param_1,longlong *param_2,ulonglong param_3,undefined8 param_4,
          undefined8 param_5)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  undefined8 *puVar4;
  code *pcVar5;
  byte bVar6;
  char cVar7;
  char cVar8;
  undefined8 *puVar10;
  undefined8 uVar9;
  uint uVar11;
  ulonglong uVar12;
  ulonglong extraout_RDX;
  char *pcVar13;
  ulonglong *puVar14;
  ulonglong unaff_RBP;
  undefined **ppuVar15;
  longlong lVar16;
  bool bVar17;
  longlong local_68;
  ulonglong local_48;
  undefined8 *local_38;
  
  puVar3 = (ulonglong *)*param_1;
  pcVar13 = (char *)param_1[1];
  puVar14 = (ulonglong *)param_1[2];
  puVar4 = (undefined8 *)param_1[3];
  puVar1 = puVar3 + 1;
LAB_006e0a45:
  while (*pcVar13 == '\0') {
    unaff_RBP = *puVar3 >> 2;
    if (unaff_RBP == *puVar14) {
      uVar12 = *puVar3 & 0xfffffffffffffffc;
      LOCK();
      bVar17 = uVar12 + 2 == *puVar3;
      if (bVar17) {
        *puVar3 = uVar12;
      }
      UNLOCK();
      if (bVar17) goto LAB_006e0a40;
      if (param_2 == (longlong *)0x0) {
        local_68 = 0;
      }
      else {
        local_68 = (*(code *)**(undefined8 **)*param_2)();
        local_48 = param_3;
      }
      param_3 = 1;
      LOCK();
      bVar17 = (int)puVar3[1] == 0;
      if (bVar17) {
        *(undefined4 *)(puVar3 + 1) = 1;
      }
      UNLOCK();
      if (!bVar17) {
        (*(code *)PTR_lock_contended_00798fe0)();
      }
      if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
        bVar6 = 0;
      }
      else {
        bVar6 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
        bVar6 = bVar6 ^ 1;
      }
      uVar12 = *puVar3;
      if (uVar12 >> 2 == unaff_RBP) {
        uVar11 = (uint)uVar12 & 3;
        switch(uVar11) {
        case 0:
switchD_006e0be4_caseD_0:
          uVar12 = uVar12 & 0xfffffffffffffffc;
          LOCK();
          uVar2 = *puVar3;
          bVar17 = uVar12 == uVar2;
          if (bVar17) {
            *puVar3 = uVar12 + 1;
          }
          else {
            uVar12 = uVar2;
          }
          UNLOCK();
          if (bVar17) break;
          local_38 = (undefined8 *)(ulonglong)((uint)uVar12 & 3);
          switch((uint)uVar12 & 3) {
          case 2:
switchD_006e0be4_caseD_2:
            param_3 = uVar12 & 0xfffffffffffffffc;
            uVar12 = param_3 + 2;
            LOCK();
            uVar2 = *puVar3;
            bVar17 = uVar12 == uVar2;
            if (bVar17) {
              *puVar3 = param_3;
            }
            else {
              uVar12 = uVar2;
            }
            UNLOCK();
            if (!bVar17) goto code_r0x006e0c94;
            break;
          default:
            pcVar13 = "\x02";
            ppuVar15 = &PTR_s__vendor_tokio_1_54_1_src_sync_no_00793bb8;
            goto LAB_006e0fbf;
          }
          goto LAB_006e0cbb;
        case 2:
          goto switchD_006e0be4_caseD_2;
        case 3:
          (*(code *)PTR_panic_00799338)
                    ((longlong)&switchD_006e0be4::switchdataD_001b62ec +
                     (longlong)(int)(&switchD_006e0be4::switchdataD_001b62ec)[uVar11],
                     &PTR_s__vendor_tokio_1_54_1_src_sync_no_00793be8);
LAB_006e1058:
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        cVar7 = local_68 == 0;
        if ((bool)cVar7) {
          unaff_RBP = 0;
        }
        else {
          unaff_RBP = puVar4[2];
          puVar4[2] = local_68;
          puVar4[3] = local_48;
        }
        puVar14 = (ulonglong *)(ulonglong)(byte)cVar7;
        puVar10 = (undefined8 *)puVar3[2];
        local_38 = puVar4;
        if (puVar10 == puVar4) {
          (*(code *)
            PTR_<core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::ptr::non_null::NonNull<tokio[d7d91d38da47d894]::sync::notify::Waiter>>,core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::ptr::non_null::NonNull<tokio[d7d91d38da47d894]::sync::notify::Waiter>>>_0079a780
          )(0,&local_38,param_5,&anon_1c7207ea9655bfcf55d918eab6d9918c_48_llvm_17559541839288726608)
          ;
          goto LAB_006e1058;
        }
        puVar4[1] = puVar10;
        *puVar4 = 0;
        if (puVar10 != (undefined8 *)0x0) {
          *puVar10 = puVar4;
        }
        puVar3[2] = (ulonglong)puVar4;
        if (puVar3[3] == 0) {
          puVar3[3] = (ulonglong)puVar4;
          *pcVar13 = '\x01';
        }
        else {
          *pcVar13 = '\x01';
        }
        if (((bVar6 == 0) &&
            ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) &&
           (cVar8 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar8 == '\0')) {
          *(undefined1 *)((longlong)puVar3 + 0xc) = 1;
        }
        LOCK();
        uVar12 = *puVar1;
        *(undefined4 *)puVar1 = 0;
        UNLOCK();
        if ((int)uVar12 != 2) goto LAB_006e0e12;
        goto LAB_006e0f70;
      }
LAB_006e0cbb:
      *pcVar13 = '\x02';
      if (((bVar6 == 0) &&
          ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) &&
         (cVar7 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar7 == '\0')) {
        *(undefined1 *)((longlong)puVar3 + 0xc) = 1;
      }
      LOCK();
      uVar12 = puVar3[1];
      *(undefined4 *)(puVar3 + 1) = 0;
      UNLOCK();
      if ((int)uVar12 == 2) {
        (*(code *)PTR_wake_00799010)();
      }
      if (local_68 != 0) {
        (**(code **)(local_68 + 0x18))();
      }
    }
    else {
LAB_006e0a40:
      *pcVar13 = '\x02';
    }
  }
  if (*pcVar13 != '\x01') {
    return 0;
  }
  lVar16 = puVar4[4];
  if (1 < lVar16 - 1U) {
    if (lVar16 == 0) {
      uVar12 = 1;
      LOCK();
      bVar17 = (int)puVar3[1] == 0;
      if (bVar17) {
        *(undefined4 *)(puVar3 + 1) = 1;
      }
      UNLOCK();
      if (!bVar17) {
        (*(code *)PTR_lock_contended_00798fe0)();
      }
      if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
        unaff_RBP = 0;
      }
      else {
        uVar11 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
        unaff_RBP = (ulonglong)uVar11 ^ 1;
      }
      lVar16 = puVar4[4];
      cVar7 = (char)unaff_RBP;
      if (1 < lVar16 - 1U) {
        if (lVar16 == 0) {
          if (*puVar3 >> 2 != *puVar14) {
            local_68 = puVar4[2];
            puVar4[2] = 0;
            <tokio[d7d91d38da47d894]::util::linked_list::LinkedList<tokio[d7d91d38da47d894]::runtime::time::entry::TimerShared>>
            ::remove(puVar3 + 2,puVar4);
            *pcVar13 = '\x02';
            param_3 = extraout_RDX;
            if (((cVar7 == '\0') &&
                ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) &&
               (cVar7 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar7 == '\0')) {
              *(undefined1 *)((longlong)puVar3 + 0xc) = 1;
            }
            LOCK();
            uVar12 = puVar3[1];
            *(undefined4 *)(puVar3 + 1) = 0;
            UNLOCK();
            if ((int)uVar12 == 2) {
              (*(code *)PTR_wake_00799010)();
            }
            if (local_68 != 0) {
              (**(code **)(local_68 + 0x18))();
            }
            goto LAB_006e0a45;
          }
          if (param_2 == (longlong *)0x0) {
            lVar16 = 0;
          }
          else {
            param_2 = (longlong *)*param_2;
            if ((undefined8 *)puVar4[2] == (undefined8 *)0x0) {
              puVar10 = (undefined8 *)*param_2;
            }
            else {
              uVar12 = puVar4[3] ^ param_2[1];
              puVar10 = (undefined8 *)*param_2;
              if ((undefined8 *)puVar4[2] == puVar10 && uVar12 == 0) {
                lVar16 = 0;
                goto LAB_006e0f0c;
              }
            }
            uVar9 = (*(code *)*puVar10)();
            lVar16 = puVar4[2];
            puVar4[2] = uVar9;
            puVar4[3] = uVar12;
          }
LAB_006e0f0c:
          if (((cVar7 == '\0') &&
              ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) &&
             (cVar7 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar7 == '\0')) {
            *(undefined1 *)((longlong)puVar3 + 0xc) = 1;
          }
          LOCK();
          uVar12 = puVar3[1];
          *(undefined4 *)(puVar3 + 1) = 0;
          UNLOCK();
          if ((int)uVar12 == 2) {
            (*(code *)PTR_wake_00799010)();
          }
          if (lVar16 != 0) {
            (**(code **)(lVar16 + 0x18))();
          }
          return 1;
        }
        if (lVar16 != 5) {
          (*(code *)PTR_panic_00799338)
                    (lVar16 - 1U,&PTR_s__vendor_tokio_1_54_1_src_sync_no_00793af8);
          goto LAB_006e1058;
        }
      }
      lVar16 = puVar4[2];
      puVar4[2] = 0;
      puVar4[4] = 0;
      if (((cVar7 == '\0') &&
          ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) &&
         (cVar7 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar7 == '\0')) {
        *(undefined1 *)((longlong)puVar3 + 0xc) = 1;
      }
      LOCK();
      uVar12 = *puVar1;
      *(undefined4 *)puVar1 = 0;
      UNLOCK();
      if ((int)uVar12 == 2) {
        (*(code *)PTR_wake_00799010)();
      }
      if (lVar16 != 0) {
        (**(code **)(lVar16 + 0x18))();
      }
      goto LAB_006e0d4e;
    }
    if (lVar16 != 5) {
      (*(code *)PTR_panic_00799338)(lVar16 - 1U,&PTR_s__vendor_tokio_1_54_1_src_sync_no_00793af8);
LAB_006e0f70:
      cVar7 = (char)puVar14;
      (*(code *)PTR_wake_00799010)();
LAB_006e0e12:
      if (unaff_RBP != 0) {
        (**(code **)(unaff_RBP + 0x18))();
      }
      if (cVar7 == '\x01' && local_68 != 0) {
        (**(code **)(local_68 + 0x18))();
        return 1;
      }
      return 1;
    }
  }
  lVar16 = puVar4[2];
  puVar4[2] = 0;
  if (lVar16 != 0) {
    (**(code **)(lVar16 + 0x18))();
  }
  puVar4[4] = 0;
LAB_006e0d4e:
  *pcVar13 = '\x02';
  return 0;
code_r0x006e0c94:
  local_38 = (undefined8 *)(uVar12 & 3);
  switch((uint)uVar12 & 3) {
  case 0:
    goto switchD_006e0be4_caseD_0;
  default:
    ppuVar15 = &PTR_s__vendor_tokio_1_54_1_src_sync_no_00793bd0;
    pcVar13 = "";
LAB_006e0fbf:
    (*(code *)PTR_<usize,usize>_00799710)(0,pcVar13,param_5,ppuVar15);
    goto LAB_006e1058;
  }
}


