// 005fc5a0 <&serde_json[dc3825464c436029]::map::Map<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>

/* serde_json[dc3825464c436029]::value::to_value::<&serde_json[dc3825464c436029]::map::Map<alloc[12e961f32105355]::string::String,
   serde_json[dc3825464c436029]::value::Value>> */

undefined1 * __rustcall
serde_json[dc3825464c436029]::value::to_value::
<&serde_json[dc3825464c436029]::map::Map<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
          (undefined1 *param_1,ulonglong *param_2)

{
  ushort *puVar1;
  code *pcVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  bool bVar11;
  bool bVar12;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_88 = 0xffffffffffffffff;
  uStack_70 = 0;
  uStack_60 = 0;
  uVar6 = *param_2;
  bVar12 = uVar6 != 0;
  uVar10 = 0;
  if (bVar12) {
    uVar10 = param_2[2];
  }
  uVar8 = param_2[1];
  uVar5 = 0;
  do {
    bVar11 = uVar10 == 0;
    uVar10 = uVar10 - 1;
    if (bVar11) {
      local_38 = local_68;
      uStack_34 = uStack_64;
      uStack_30 = (undefined4)uStack_60;
      uStack_2c = uStack_60._4_4_;
      local_48 = local_78;
      uStack_44 = uStack_74;
      uStack_40 = (undefined4)uStack_70;
      uStack_3c = uStack_70._4_4_;
      local_58 = (undefined4)local_88;
      uStack_54 = local_88._4_4_;
      uStack_50 = uStack_80;
      uStack_4c = uStack_7c;
      (*(code *)PTR_end_0079a0b8)();
      return param_1;
    }
    if (!bVar12) {
      (*(code *)PTR_unwrap_failed_00799278)();
LAB_005fc857:
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if (uVar5 == 0) {
      if (uVar8 == 0) {
        uVar5 = uVar6;
      }
      else {
        uVar3 = uVar8;
        if ((uVar8 & 7) != 0) {
          uVar5 = 0;
          do {
            uVar6 = *(ulonglong *)(uVar6 + 0x278);
            uVar5 = uVar5 + 1;
          } while ((uVar8 & 7) != uVar5);
          uVar3 = uVar8 - uVar5;
        }
        uVar5 = uVar6;
        if (7 < uVar8) {
          do {
            uVar6 = *(ulonglong *)
                     (*(longlong *)
                       (*(longlong *)
                         (*(longlong *)
                           (*(longlong *)
                             (*(longlong *)
                               (*(longlong *)(*(longlong *)(uVar6 + 0x278) + 0x278) + 0x278) + 0x278
                             ) + 0x278) + 0x278) + 0x278) + 0x278);
            uVar3 = uVar3 - 8;
            uVar5 = uVar6;
          } while (uVar3 != 0);
        }
      }
      uVar6 = 0;
      uVar3 = 0;
      if (*(short *)(uVar5 + 0x272) == 0) goto LAB_005fc6e0;
LAB_005fc61a:
      uVar9 = uVar5;
    }
    else {
      uVar3 = uVar8;
      if (uVar8 < *(ushort *)(uVar5 + 0x272)) goto LAB_005fc61a;
LAB_005fc6e0:
      do {
        uVar9 = *(ulonglong *)(uVar5 + 0x160);
        if (uVar9 == 0) {
          (*(code *)PTR_unwrap_failed_00799278)();
          goto LAB_005fc857;
        }
        uVar6 = uVar6 + 1;
        puVar1 = (ushort *)(uVar5 + 0x270);
        uVar3 = (ulonglong)*puVar1;
        uVar5 = uVar9;
      } while (*(ushort *)(uVar9 + 0x272) <= *puVar1);
    }
    uVar5 = uVar9;
    if (uVar6 == 0) {
      uVar8 = uVar3 + 1;
    }
    else {
      puVar7 = (ulonglong *)(uVar9 + uVar3 * 8 + 0x280);
      uVar8 = uVar6;
      if ((uVar6 & 7) != 0) {
        uVar8 = 0;
        do {
          uVar5 = *puVar7;
          puVar7 = (ulonglong *)(uVar5 + 0x278);
          uVar8 = uVar8 + 1;
        } while ((uVar6 & 7) != uVar8);
        uVar8 = uVar6 - uVar8;
      }
      if (7 < uVar6) {
        do {
          uVar5 = *(ulonglong *)
                   (*(longlong *)
                     (*(longlong *)
                       (*(longlong *)
                         (*(longlong *)
                           (*(longlong *)(*(longlong *)(*puVar7 + 0x278) + 0x278) + 0x278) + 0x278)
                       + 0x278) + 0x278) + 0x278);
          puVar7 = (ulonglong *)(uVar5 + 0x278);
          uVar8 = uVar8 - 8;
        } while (uVar8 != 0);
      }
      uVar8 = 0;
    }
    lVar4 = <serde_json[dc3825464c436029]::value::ser::SerializeMap_as_serde_core[48776c27239fa21f]::ser::SerializeMap>
            ::serialize_entry::
            <alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>
                      (&local_88,uVar9 + uVar3 * 0x18 + 0x168,uVar3 * 0x20 + uVar9);
    bVar12 = true;
    uVar6 = 0;
    if (lVar4 != 0) {
      *(longlong *)(param_1 + 8) = lVar4;
      *param_1 = 0xff;
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
      <serde_json[dc3825464c436029]::value::ser::SerializeMap>(&local_88);
      return param_1;
    }
  } while( true );
}


