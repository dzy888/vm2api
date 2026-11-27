// 0016d6a0 activate

/* craggemini[b21da2d71f2da7a3]::license::activate */

undefined8 * __rustcall
craggemini[b21da2d71f2da7a3]::license::activate
          (undefined8 *param_1,longlong param_2,ulonglong param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
          undefined8 param_9)

{
  undefined6 uVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  int *piVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined1 uVar12;
  longlong lVar13;
  ulonglong extraout_RDX;
  int iVar14;
  byte bVar15;
  longlong lVar16;
  undefined4 uVar17;
  undefined1 auVar18 [16];
  undefined4 local_51c;
  undefined8 local_518;
  uint local_50c;
  uint local_508;
  undefined1 local_500 [8];
  byte local_4f8;
  undefined4 local_4f7;
  undefined4 uStack_4ef;
  undefined4 uStack_4eb;
  undefined4 local_4e7;
  undefined4 uStack_4e3;
  undefined4 uStack_4df;
  undefined4 uStack_4db;
  undefined4 local_4d7;
  undefined4 uStack_4d3;
  undefined4 uStack_4cf;
  undefined4 uStack_4cb;
  undefined4 local_4c7;
  undefined4 uStack_4c3;
  undefined4 uStack_4bf;
  undefined4 uStack_4bb;
  undefined8 local_4b7;
  undefined8 uStack_4af;
  undefined8 local_4a7;
  undefined8 uStack_49f;
  undefined8 local_497;
  byte local_480;
  char cStack_47f;
  undefined4 uStack_47e;
  undefined2 uStack_47a;
  byte bStack_478;
  undefined4 uStack_477;
  undefined1 uStack_473;
  undefined2 uStack_472;
  undefined1 uStack_470;
  undefined4 uStack_46f;
  undefined4 uStack_46b;
  undefined4 uStack_467;
  undefined4 uStack_463;
  undefined4 uStack_45f;
  undefined4 uStack_45b;
  undefined4 local_457;
  undefined4 uStack_453;
  undefined4 uStack_44f;
  undefined4 uStack_44b;
  undefined4 local_447;
  undefined4 uStack_443;
  undefined4 uStack_43f;
  undefined4 uStack_43b;
  undefined8 local_437;
  undefined8 uStack_42f;
  undefined8 local_427;
  undefined8 uStack_41f;
  undefined8 local_417;
  char local_368;
  undefined8 local_367;
  undefined7 uStack_35f;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  int local_348 [2];
  longlong local_340;
  longlong local_338;
  longlong local_330;
  longlong local_2f8;
  longlong *local_2f0;
  longlong local_2e8;
  char local_2e0;
  uint local_2dc;
  undefined4 local_2c0;
  undefined4 uStack_2bc;
  byte bStack_2b8;
  undefined4 uStack_2b7;
  undefined4 uStack_2b3;
  undefined3 uStack_2af;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined1 local_238 [104];
  longlong local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  undefined4 local_1a8 [26];
  undefined1 local_140 [8];
  byte local_138;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 local_b0 [128];
  
  decode_hash(&local_480,anon_c9247e0b0208fc9c8c019285c3882aec_92_llvm_5798562142159169407,0x40);
  if (local_480 == 1) {
    *(undefined1 *)(param_1 + 1) = 6;
    goto LAB_0016d8b6;
  }
  local_367 = CONCAT17((byte)uStack_477,CONCAT16(bStack_478,CONCAT24(uStack_47a,uStack_47e)));
  uStack_35f = CONCAT16(uStack_470,CONCAT24(uStack_472,CONCAT13(uStack_473,uStack_477._1_3_)));
  uStack_358 = uStack_46f;
  uStack_354 = uStack_46b;
  uStack_350 = uStack_467;
  uStack_34c = uStack_463;
  local_368 = cStack_47f;
  local_518 = param_6;
  uVar17 = (*(code *)PTR_now_00219d68)();
  iVar4 = (int)local_50c >> 0xd;
  iVar14 = iVar4 + -1;
  iVar5 = 0;
  if (iVar4 < 1) {
    iVar5 = (1U - iVar4) / 400 + 1;
    iVar14 = iVar14 + iVar5 * 400;
    iVar5 = iVar5 * -0x23ab1;
  }
  if (param_3 - 1 < 0x100) {
    if (param_3 < 0x10) {
      uVar7 = 0;
      do {
        if (*(char *)(param_2 + uVar7) == '\0') goto LAB_0016d8b2;
        uVar7 = uVar7 + 1;
      } while (param_3 != uVar7);
    }
    else {
      lVar16 = (*(code *)PTR_memchr_aligned_00219d40)(uVar17,param_3);
      if (lVar16 == 1) goto LAB_0016d8b2;
    }
    uVar17 = <str>::trim_matches::<<char>::is_whitespace>(param_2,param_3);
    if ((extraout_RDX == param_3) &&
       (iVar4 = (*(code *)PTR_bcmp_00219d38)(uVar17,param_3), iVar4 == 0)) {
      auVar18 = <str>::trim_matches::<<char>::is_whitespace>(param_8,param_9);
      uVar7 = auVar18._8_8_;
      piVar8 = auVar18._0_8_;
      if ((6 < uVar7) && (*(int *)((longlong)piVar8 + 3) != 0x2e314b47 || *piVar8 != 0x47415243)) {
        lVar16 = (longlong)
                 (int)((iVar14 / 100 >> 2) +
                       (((local_50c >> 4 & 0x1ff) + iVar5) - iVar14 / 100) + (iVar14 * 0x5b5 >> 2) +
                      -0xaf93b) * 0x15180 + (ulonglong)local_508;
        if (*(int *)((longlong)piVar8 + 3) == 0x2e314c47 && *piVar8 == 0x47415243) {
          uVar9 = <craggemini[b21da2d71f2da7a3]::license::files::PrivateDir>::open
                            (param_4,param_5,0);
          if ((uVar9 & 1) != 0) {
LAB_0016db36:
            *(char *)(param_1 + 1) = (char)(uVar9 >> 8);
            goto LAB_0016d8b6;
          }
          local_51c = (undefined4)(uVar9 >> 0x20);
          <craggemini[b21da2d71f2da7a3]::license::Device>::load
                    (&local_480,&local_51c,param_2,param_3,"/etc/machine-id",0xf);
          if (CONCAT26(uStack_47a,CONCAT42(uStack_47e,CONCAT11(cStack_47f,local_480))) == -1) {
LAB_0016dc7d:
            *(byte *)(param_1 + 1) = bStack_478;
            *param_1 = 2;
            goto LAB_0016dd42;
          }
          local_497 = local_417;
          local_4a7 = local_427;
          uStack_49f = uStack_41f;
          local_4b7 = local_437;
          uStack_4af = uStack_42f;
          local_4c7 = local_447;
          uStack_4c3 = uStack_443;
          uStack_4bf = uStack_43f;
          uStack_4bb = uStack_43b;
          local_4d7 = local_457;
          uStack_4d3 = uStack_453;
          uStack_4cf = uStack_44f;
          uStack_4cb = uStack_44b;
          local_4e7 = uStack_467;
          uStack_4e3 = uStack_463;
          uStack_4df = uStack_45f;
          uStack_4db = uStack_45b;
          local_4f7 = uStack_477;
          uStack_4ef = uStack_46f;
          uStack_4eb = uStack_46b;
          local_4f8 = bStack_478;
          <craggemini[b21da2d71f2da7a3]::license::Device>::machine(local_1a8,local_500);
          uVar17 = authenticated_claims(&local_480,piVar8,uVar7,&local_368,local_1a8);
          bVar15 = bStack_478;
          uVar1 = CONCAT42(uStack_47e,CONCAT11(cStack_47f,local_480));
          lVar13 = CONCAT26(uStack_47a,uVar1);
          if (lVar13 == -1) {
LAB_0016dd20:
            *(byte *)(param_1 + 1) = bVar15;
            *param_1 = 2;
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::
            <craggemini[b21da2d71f2da7a3]::license::MachineIdentity>(local_1a8);
          }
          else {
            (*(code *)PTR_memcpy_00219c60)(uVar17,0x107);
            local_2c0 = (undefined4)uVar1;
            uStack_2bc = (undefined4)((ulonglong)lVar13 >> 0x20);
            bStack_2b8 = bVar15;
            if ((lVar16 < local_1c8 || lVar16 < local_1d0) || local_1c0 <= lVar16) {
              bVar15 = 2;
              if (lVar16 >= local_1c8 && lVar16 >= local_1d0) {
                bVar15 = -(lVar16 < local_1c0) | 1;
              }
              core[c0acaeba6ab4c2e0]::ptr::drop_glue::
              <craggemini[b21da2d71f2da7a3]::license::Claims>(&local_2c0);
              goto LAB_0016dd20;
            }
            (*(code *)PTR_memcpy_00219c60)(local_1c0,0x107);
            local_138 = bVar15;
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::
            <craggemini[b21da2d71f2da7a3]::license::MachineIdentity>(local_1a8,&uStack_2b7);
            unwrap_device_key(&local_480,local_b0,local_c0,local_b8,local_500);
            if (local_480 != 1) {
              uStack_2b7 = CONCAT13(uStack_473,uStack_477._1_3_);
              uStack_2b3 = CONCAT13((undefined1)uStack_46f,CONCAT12(uStack_470,uStack_472));
              uStack_2af = (undefined3)((uint)uStack_46f >> 8);
              uStack_2ac = uStack_46b;
              uStack_2a8 = uStack_467;
              uStack_2a4 = uStack_463;
              uStack_2bc = CONCAT31(CONCAT12(bStack_478,uStack_47a),(char)((uint)uStack_47e >> 0x18)
                                   );
              bStack_2b8 = (byte)uStack_477;
              local_2c0 = CONCAT31((int3)uStack_47e,cStack_47f);
              <craggemini[b21da2d71f2da7a3]::license::GrantMetadata_as_core[c0acaeba6ab4c2e0]::convert::From<craggemini[b21da2d71f2da7a3]::license::Claims>>
              ::from(local_348,local_140);
              <zeroize[9db449f162459538]::Zeroizing<[u8;32:usize]>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
              ::drop(&local_2c0);
              core[c0acaeba6ab4c2e0]::ptr::drop_glue::
              <craggemini[b21da2d71f2da7a3]::license::Device>(local_500);
              goto LAB_0016dda5;
            }
            *(char *)(param_1 + 1) = cStack_47f;
            *param_1 = 2;
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini[b21da2d71f2da7a3]::license::Claims>
                      (local_140);
          }
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini[b21da2d71f2da7a3]::license::Device>
                    (local_500);
LAB_0016dd42:
          (*(code *)PTR_close_00219d60)();
          return param_1;
        }
        if (*(int *)((longlong)piVar8 + 3) == 0x2e315347 && *piVar8 == 0x47415243) {
          uVar9 = <craggemini[b21da2d71f2da7a3]::license::files::PrivateDir>::open
                            (param_4,param_5,0);
          if ((uVar9 & 1) == 0) {
            uVar10 = uVar9 >> 0x20;
            local_1a8[0] = (undefined4)(uVar9 >> 0x20);
            <craggemini[b21da2d71f2da7a3]::license::Device>::load
                      (&local_480,local_1a8,param_2,param_3,"/etc/machine-id",0xf);
            if (CONCAT26(uStack_47a,CONCAT42(uStack_47e,CONCAT11(cStack_47f,local_480))) != -1) {
              local_497 = local_417;
              local_4a7 = local_427;
              uStack_49f = uStack_41f;
              local_4b7 = local_437;
              uStack_4af = uStack_42f;
              local_4c7 = local_447;
              uStack_4c3 = uStack_443;
              uStack_4bf = uStack_43f;
              uStack_4bb = uStack_43b;
              local_4d7 = local_457;
              uStack_4d3 = uStack_453;
              uStack_4cf = uStack_44f;
              uStack_4cb = uStack_44b;
              local_4e7 = uStack_467;
              uStack_4e3 = uStack_463;
              uStack_4df = uStack_45f;
              uStack_4db = uStack_45b;
              local_4f7 = uStack_477;
              uStack_4ef = uStack_46f;
              uStack_4eb = uStack_46b;
              local_4f8 = bStack_478;
              uVar17 = host_registration(&local_480,piVar8,uVar7,&local_368,local_500,local_518,
                                         param_7,lVar16,uVar10);
              bVar15 = bStack_478;
              puVar2 = PTR_memcpy_00219c60;
              uVar1 = CONCAT42(uStack_47e,CONCAT11(cStack_47f,local_480));
              lVar13 = CONCAT26(uStack_47a,uVar1);
              if (lVar13 == 2) {
                *(byte *)(param_1 + 1) = bStack_478;
                *param_1 = 2;
                core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                <craggemini[b21da2d71f2da7a3]::license::Device>(local_500);
                goto LAB_0016dd42;
              }
              uVar17 = (*(code *)PTR_memcpy_00219c60)(uVar17,0x10f);
              local_2c0 = (undefined4)uVar1;
              uStack_2bc = (undefined4)((ulonglong)lVar13 >> 0x20);
              bStack_2b8 = bVar15;
              (*(code *)puVar2)(uVar17,0x88);
              <zeroize[9db449f162459538]::Zeroizing<[u8;32:usize]>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
              ::drop(local_238,&local_2c0);
              core[c0acaeba6ab4c2e0]::ptr::drop_glue::
              <craggemini[b21da2d71f2da7a3]::license::Device>(local_500);
LAB_0016dda5:
              (*(code *)PTR_close_00219d60)();
              local_2c0 = (undefined4)lVar16;
              uStack_2bc = (undefined4)((ulonglong)lVar16 >> 0x20);
              if ((local_348[0] != 1) ||
                 (((uVar12 = 2, local_340 <= lVar16 && (local_338 <= lVar16)) &&
                  (uVar12 = 1, lVar16 < local_330)))) {
                if ((local_2f8 == -1) || (local_2e0 == '\0')) {
LAB_0016deb7:
                  uVar9 = <craggemini[b21da2d71f2da7a3]::license::files::PrivateDir>::open
                                    (param_4,param_5,1);
                  if ((uVar9 & 1) == 0) {
                    local_2c0 = (undefined4)(uVar9 >> 0x20);
                    <craggemini[b21da2d71f2da7a3]::license::files::PrivateDir>::fingerprint
                              (&local_480,&local_2c0,"registration.code",0x11);
                    cVar3 = cStack_47f;
                    if (((local_480 & cStack_47f != '\0') == 0) &&
                       (cVar3 = <craggemini[b21da2d71f2da7a3]::license::files::PrivateDir>::write
                                          (&local_2c0,"registration.code",0x11,piVar8,uVar7,1),
                       cVar3 == -1)) {
                      uVar17 = <craggemini[b21da2d71f2da7a3]::license::LicenseStatus>::make
                                         (&local_480,param_2,param_3,local_348,0xff);
                      (*(code *)PTR_memcpy_00219c60)(uVar17,0xf8);
                    }
                    else {
                      *(char *)(param_1 + 1) = cVar3;
                      *param_1 = 2;
                    }
                    (*(code *)PTR_close_00219d60)();
                  }
                  else {
                    *(char *)(param_1 + 1) = (char)(uVar9 >> 8);
                    *param_1 = 2;
                  }
                  goto LAB_0016df5f;
                }
                lVar13 = local_2e8 * 0x10;
                plVar11 = local_2f0 + local_2e8 * 2;
                bStack_478 = (byte)plVar11;
                uStack_477 = (undefined4)((ulonglong)plVar11 >> 8);
                uStack_473 = (undefined1)((ulonglong)plVar11 >> 0x28);
                uStack_472 = (undefined2)((ulonglong)plVar11 >> 0x30);
                uStack_470 = SUB81(&local_2c0,0);
                uStack_46f = (undefined4)((ulonglong)&local_2c0 >> 8);
                uStack_46b._0_3_ = (undefined3)((ulonglong)&local_2c0 >> 0x28);
                while (local_2e8 != 0) {
                  plVar11 = local_2f0 + 2;
                  if (lVar16 < *local_2f0) {
                    local_480 = (byte)plVar11;
                    cStack_47f = (char)((ulonglong)plVar11 >> 8);
                    uStack_47e = (undefined4)((ulonglong)plVar11 >> 0x10);
                    uStack_47a = (undefined2)((ulonglong)plVar11 >> 0x30);
                    uVar6 = <core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::iter::adapters::filter::Filter<core[c0acaeba6ab4c2e0]::slice::iter::Iter<craggemini[b21da2d71f2da7a3]::license::host::HostGrant>,<craggemini[b21da2d71f2da7a3]::license::GrantMetadata>::check_at::{closure#0}>,<craggemini[b21da2d71f2da7a3]::license::GrantMetadata>::check_at::{closure#1}>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
                            ::fold::
                            <craggemini[b21da2d71f2da7a3]::license::host::SlotLimit,<craggemini[b21da2d71f2da7a3]::license::host::SlotLimit>::saturating_union>
                                      (&local_480,(int)local_2f0[1]);
                    uVar12 = 4;
                    if ((local_2dc == 0) || (uVar6 != 0 && uVar6 < local_2dc)) goto LAB_0016de72;
                    goto LAB_0016deb7;
                  }
                  lVar13 = lVar13 + -0x10;
                  local_2f0 = plVar11;
                  local_2e8 = lVar13;
                }
                uVar12 = 1;
              }
LAB_0016de72:
              *(undefined1 *)(param_1 + 1) = uVar12;
              *param_1 = 2;
LAB_0016df5f:
              core[c0acaeba6ab4c2e0]::ptr::drop_glue::
              <craggemini[b21da2d71f2da7a3]::license::GrantMetadata>(local_348);
              return param_1;
            }
            goto LAB_0016dc7d;
          }
          goto LAB_0016db36;
        }
      }
    }
  }
LAB_0016d8b2:
  *(undefined1 *)(param_1 + 1) = 3;
LAB_0016d8b6:
  *param_1 = 2;
  return param_1;
}


