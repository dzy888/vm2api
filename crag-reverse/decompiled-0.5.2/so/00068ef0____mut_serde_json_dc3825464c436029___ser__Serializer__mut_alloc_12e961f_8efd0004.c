// 00068ef0 <&mut_serde_json[dc3825464c436029]::ser::Serializer<&mut_alloc[12e961f32105355]::vec::Vec<u8>>>

/* <serde_json[dc3825464c436029]::value::Value as
   serde_core[48776c27239fa21f]::ser::Serialize>::serialize::<&mut
   serde_json[dc3825464c436029]::ser::Serializer<&mut alloc[12e961f32105355]::vec::Vec<u8>>> */

undefined8 __rustcall
<serde_json[dc3825464c436029]::value::Value_as_serde_core[48776c27239fa21f]::ser::Serialize>::
serialize::
<&mut_serde_json[dc3825464c436029]::ser::Serializer<&mut_alloc[12e961f32105355]::vec::Vec<u8>>>
          (undefined1 *param_1,longlong *param_2)

{
  ushort *puVar1;
  code *pcVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong *puVar15;
  longlong lVar16;
  ulonglong local_48;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_1) {
  case 0:
    param_2 = (longlong *)*param_2;
    lVar13 = param_2[2];
    if ((ulonglong)(*param_2 - lVar13) < 4) {
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(param_2,lVar13,4,1,1);
      lVar13 = param_2[2];
    }
    *(undefined4 *)(param_2[1] + lVar13) = 0x6c6c756e;
    break;
  case 1:
    param_2 = (longlong *)*param_2;
    if (param_1[1] == '\0') {
      lVar13 = param_2[2];
      if ((ulonglong)(*param_2 - lVar13) < 5) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(param_2,lVar13,5,1,1);
        lVar13 = param_2[2];
      }
      lVar10 = param_2[1];
      *(undefined1 *)(lVar10 + 4 + lVar13) = 0x65;
      *(undefined4 *)(lVar10 + lVar13) = 0x736c6166;
      lVar13 = lVar13 + 5;
      goto LAB_000693fc;
    }
    lVar13 = param_2[2];
    if ((ulonglong)(*param_2 - lVar13) < 4) {
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(param_2,lVar13,4,1,1);
      lVar13 = param_2[2];
    }
    *(undefined4 *)(param_2[1] + lVar13) = 0x65757274;
    break;
  case 2:
    <serde_json[dc3825464c436029]::number::Number_as_serde_core[48776c27239fa21f]::ser::Serialize>::
    serialize::
    <&mut_serde_json[dc3825464c436029]::ser::Serializer<&mut_alloc[12e961f32105355]::vec::Vec<u8>>>
              (param_1 + 8,param_2);
    return 0;
  case 3:
    serde_json[dc3825464c436029]::ser::format_escaped_str::
    <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>
              (param_2,param_2,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
    return 0;
  case 4:
    lVar13 = *(longlong *)(param_1 + 0x10);
    lVar10 = *(longlong *)(param_1 + 0x18);
    puVar15 = (ulonglong *)*param_2;
    uVar11 = puVar15[2];
    if (*puVar15 == uVar11) {
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(puVar15,uVar11,1,1,1);
      uVar11 = puVar15[2];
    }
    *(undefined1 *)(puVar15[1] + uVar11) = 0x5b;
    puVar15[2] = uVar11 + 1;
    if (lVar10 != 0) {
      <&mut_serde_json[dc3825464c436029]::ser::Serializer<&mut_alloc[12e961f32105355]::vec::Vec<u8>>>
                (lVar13,param_2);
      puVar15 = (ulonglong *)*param_2;
      if (lVar10 != 1) {
        lVar10 = lVar10 * 0x20 + -0x20;
        do {
          lVar13 = lVar13 + 0x20;
          uVar11 = puVar15[2];
          if (*puVar15 == uVar11) {
            <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
            <alloc[12e961f32105355]::alloc::Global>(puVar15,uVar11,1,1,1);
            uVar11 = puVar15[2];
          }
          *(undefined1 *)(puVar15[1] + uVar11) = 0x2c;
          puVar15[2] = uVar11 + 1;
          <&mut_serde_json[dc3825464c436029]::ser::Serializer<&mut_alloc[12e961f32105355]::vec::Vec<u8>>>
                    (lVar13,param_2);
          puVar15 = (ulonglong *)*param_2;
          lVar10 = lVar10 + -0x20;
        } while (lVar10 != 0);
      }
    }
    uVar11 = puVar15[2];
    if (*puVar15 == uVar11) {
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(puVar15,uVar11,1,1,1);
      uVar11 = puVar15[2];
    }
    *(undefined1 *)(puVar15[1] + uVar11) = 0x5d;
LAB_000690a8:
    puVar15[2] = uVar11 + 1;
    return 0;
  case 5:
    lVar13 = *(longlong *)(param_1 + 0x18);
    puVar15 = (ulonglong *)*param_2;
    uVar11 = puVar15[2];
    if (*puVar15 == uVar11) {
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(puVar15,uVar11,1);
      uVar11 = puVar15[2];
    }
    *(undefined1 *)(puVar15[1] + uVar11) = 0x7b;
    uVar11 = uVar11 + 1;
    puVar15[2] = uVar11;
    if (lVar13 == 0) {
      if (*puVar15 == uVar11) {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(puVar15,uVar11,1,1,1);
        uVar11 = puVar15[2];
      }
      *(undefined1 *)(puVar15[1] + uVar11) = 0x7d;
      goto LAB_000690a8;
    }
    lVar10 = *(longlong *)(param_1 + 8);
    if (lVar10 != 0) {
      uVar4 = *(ulonglong *)(param_1 + 0x10);
      if (uVar4 != 0) {
        if ((uVar4 & 7) == 0) {
          uVar8 = uVar4;
        }
        else {
          uVar8 = 0;
          do {
            lVar10 = *(longlong *)(lVar10 + 0x278);
            uVar8 = uVar8 + 1;
          } while ((uVar4 & 7) != uVar8);
          uVar8 = uVar4 - uVar8;
        }
        if (7 < uVar4) {
          do {
            lVar10 = *(longlong *)
                      (*(longlong *)
                        (*(longlong *)
                          (*(longlong *)
                            (*(longlong *)
                              (*(longlong *)
                                (*(longlong *)(*(longlong *)(lVar10 + 0x278) + 0x278) + 0x278) +
                              0x278) + 0x278) + 0x278) + 0x278) + 0x278);
            uVar8 = uVar8 - 8;
          } while (uVar8 != 0);
        }
      }
      if (*(short *)(lVar10 + 0x272) == 0) {
        uVar4 = 0;
        lVar14 = lVar10;
        uVar3 = 1;
        do {
          uVar7 = uVar3;
          uVar11 = uVar4;
          lVar10 = *(longlong *)(lVar14 + 0x160);
          if (lVar10 == 0) {
            (*(code *)PTR_unwrap_failed_000c3b08)();
LAB_000695d2:
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          uVar4 = uVar11 + 1;
          puVar1 = (ushort *)(lVar14 + 0x270);
          uVar8 = (ulonglong)*puVar1;
          lVar14 = lVar10;
          uVar3 = uVar7 + 1;
        } while (*(ushort *)(lVar10 + 0x272) <= *puVar1);
        if (uVar4 == 0) goto LAB_000691bd;
        plVar6 = (longlong *)(lVar10 + uVar8 * 8 + 0x280);
        if ((uVar4 & 7) != 0) {
          uVar12 = 0;
          do {
            lVar14 = *plVar6;
            plVar6 = (longlong *)(lVar14 + 0x278);
            uVar12 = uVar12 + 1;
          } while ((uVar7 & 7) != uVar12);
          uVar4 = uVar4 - uVar12;
        }
        if (uVar11 < 7) {
          local_48 = 0;
        }
        else {
          local_48 = 0;
          do {
            lVar14 = *(longlong *)
                      (*(longlong *)
                        (*(longlong *)
                          (*(longlong *)
                            (*(longlong *)
                              (*(longlong *)(*(longlong *)(*plVar6 + 0x278) + 0x278) + 0x278) +
                            0x278) + 0x278) + 0x278) + 0x278);
            plVar6 = (longlong *)(lVar14 + 0x278);
            uVar4 = uVar4 - 8;
          } while (uVar4 != 0);
        }
      }
      else {
        uVar8 = 0;
LAB_000691bd:
        local_48 = uVar8 + 1;
        lVar14 = lVar10;
      }
      lVar16 = (ulonglong)(uint)((int)uVar8 << 5) + lVar10;
      uVar9 = *(undefined8 *)(lVar10 + 0x170 + uVar8 * 0x18);
      uVar5 = *(undefined8 *)(lVar10 + 0x178 + uVar8 * 0x18);
      while( true ) {
        serde_json[dc3825464c436029]::ser::format_escaped_str::
        <&mut_alloc[12e961f32105355]::vec::Vec<u8>,serde_json[dc3825464c436029]::ser::CompactFormatter>
                  (param_2,uVar11,uVar9,uVar5);
        plVar6 = (longlong *)*param_2;
        lVar10 = plVar6[2];
        if (*plVar6 == lVar10) {
          <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
          <alloc[12e961f32105355]::alloc::Global>(plVar6,lVar10,1,1,1);
          lVar10 = plVar6[2];
        }
        lVar13 = lVar13 + -1;
        *(undefined1 *)(plVar6[1] + lVar10) = 0x3a;
        plVar6[2] = lVar10 + 1;
        <&mut_serde_json[dc3825464c436029]::ser::Serializer<&mut_alloc[12e961f32105355]::vec::Vec<u8>>>
                  (lVar16,param_2);
        if (lVar13 == 0) break;
        if (local_48 < *(ushort *)(lVar14 + 0x272)) {
          uVar8 = local_48;
LAB_00069299:
          local_48 = uVar8 + 1;
          lVar16 = lVar14;
        }
        else {
          uVar11 = 0;
          uVar3 = 1;
          do {
            uVar7 = uVar3;
            uVar4 = uVar11;
            lVar16 = *(longlong *)(lVar14 + 0x160);
            if (lVar16 == 0) {
              (*(code *)PTR_unwrap_failed_000c3b08)();
              goto LAB_000695d2;
            }
            uVar11 = uVar4 + 1;
            puVar1 = (ushort *)(lVar14 + 0x270);
            uVar8 = (ulonglong)*puVar1;
            lVar14 = lVar16;
            uVar3 = uVar7 + 1;
          } while (*(ushort *)(lVar16 + 0x272) <= *puVar1);
          if (uVar11 == 0) goto LAB_00069299;
          plVar6 = (longlong *)(lVar16 + uVar8 * 8 + 0x280);
          if ((uVar11 & 7) != 0) {
            uVar12 = 0;
            do {
              lVar14 = *plVar6;
              plVar6 = (longlong *)(lVar14 + 0x278);
              uVar12 = uVar12 + 1;
            } while ((uVar7 & 7) != uVar12);
            uVar11 = uVar11 - uVar12;
          }
          if (6 < uVar4) {
            do {
              lVar14 = *(longlong *)
                        (*(longlong *)
                          (*(longlong *)
                            (*(longlong *)
                              (*(longlong *)
                                (*(longlong *)(*(longlong *)(*plVar6 + 0x278) + 0x278) + 0x278) +
                              0x278) + 0x278) + 0x278) + 0x278);
              plVar6 = (longlong *)(lVar14 + 0x278);
              uVar11 = uVar11 - 8;
            } while (uVar11 != 0);
          }
          local_48 = 0;
        }
        uVar9 = *(undefined8 *)(lVar16 + 0x170 + uVar8 * 0x18);
        uVar5 = *(undefined8 *)(lVar16 + 0x178 + uVar8 * 0x18);
        plVar6 = (longlong *)*param_2;
        lVar10 = plVar6[2];
        if (*plVar6 == lVar10) {
          <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
          <alloc[12e961f32105355]::alloc::Global>(plVar6,lVar10,1,1,1);
          lVar10 = plVar6[2];
        }
        lVar16 = lVar16 + uVar8 * 0x20;
        *(undefined1 *)(plVar6[1] + lVar10) = 0x2c;
        uVar11 = lVar10 + 1;
        plVar6[2] = uVar11;
      }
    }
    param_2 = (longlong *)*param_2;
    lVar13 = param_2[2];
    if (*param_2 == lVar13) {
      <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
      <alloc[12e961f32105355]::alloc::Global>(param_2,lVar13,1,1,1);
      lVar13 = param_2[2];
    }
    *(undefined1 *)(param_2[1] + lVar13) = 0x7d;
    lVar13 = lVar13 + 1;
    goto LAB_000693fc;
  }
  lVar13 = lVar13 + 4;
LAB_000693fc:
  param_2[2] = lVar13;
  return 0;
}


