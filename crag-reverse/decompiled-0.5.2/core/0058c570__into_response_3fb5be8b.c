// 0058c570 into_response

/* <(http[56314f485c23ccf6]::status::StatusCode, [(http[56314f485c23ccf6]::header::name::HeaderName,
   &str); 1usize], axum[743f01f147681d98]::json::Json<serde_json[dc3825464c436029]::value::Value>)
   as axum_core[61c49771464cda0a]::response::into_response::IntoResponse>::into_response */

undefined8 * __rustcall
<(http[56314f485c23ccf6]::status::StatusCode,[(http[56314f485c23ccf6]::header::name::HeaderName,&str);1:usize],axum[743f01f147681d98]::json::Json<serde_json[dc3825464c436029]::value::Value>)as_axum_core[61c49771464cda0a]::response::into_response::IntoResponse>
::into_response(undefined8 *param_1,undefined8 *param_2)

{
  ushort *puVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined *puVar8;
  char cVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong *puVar16;
  ulonglong uVar17;
  bool bVar18;
  bool bVar19;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar20;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  longlong lStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  char local_178;
  char cStack_177;
  undefined2 uStack_176;
  undefined4 uStack_174;
  undefined8 **ppuStack_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 *local_b0;
  undefined8 auStack_a8 [3];
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  uVar2 = *(undefined2 *)(param_2 + 6);
  uVar3 = *param_2;
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  local_f8 = param_2[4];
  uStack_f0 = param_2[5];
  local_218 = *(undefined4 *)(param_2 + 7);
  uStack_214 = *(undefined4 *)((longlong)param_2 + 0x3c);
  uStack_210 = *(undefined4 *)(param_2 + 8);
  uStack_20c = *(undefined4 *)((longlong)param_2 + 0x44);
  local_208 = *(undefined4 *)(param_2 + 9);
  uStack_204 = *(undefined4 *)((longlong)param_2 + 0x4c);
  uStack_200 = *(undefined4 *)(param_2 + 10);
  uStack_1fc = *(undefined4 *)((longlong)param_2 + 0x54);
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  lVar10 = (*(code *)PTR___rust_alloc_00799000)();
  puVar8 = PTR_put_slice_00799c88;
  if (lVar10 == 0) {
    (*(code *)PTR_handle_error_00798ff0)();
LAB_0058cd30:
                    /* WARNING: Does not return */
    pcVar7 = (code *)invalidInstructionException();
    (*pcVar7)();
  }
  lStack_1f0 = 0;
  local_1e8 = 0x80;
  uStack_1e0 = 1;
  local_b0 = &local_1f8;
  local_1f8 = (undefined8 *)lVar10;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((undefined1)local_218) {
  case 0:
    uVar17 = 4;
    uVar20 = extraout_XMM0_Da;
    do {
      lVar10 = lStack_1f0;
      uVar14 = 0x7fffffffffffffffU - lStack_1f0;
      if (uVar17 < 0x7fffffffffffffffU - lStack_1f0) {
        uVar14 = uVar17;
      }
      uVar20 = (*(code *)puVar8)(uVar20,uVar14);
      if (lVar10 == 0x7fffffffffffffff) goto LAB_0058c7c9;
      uVar17 = uVar17 - uVar14;
    } while (uVar17 != 0);
    goto LAB_0058c77d;
  case 1:
    uVar17 = (ulonglong)local_218._1_1_ ^ 5;
    uVar20 = extraout_XMM0_Da;
    do {
      lVar10 = lStack_1f0;
      uVar14 = 0x7fffffffffffffffU - lStack_1f0;
      if (uVar17 < 0x7fffffffffffffffU - lStack_1f0) {
        uVar14 = uVar17;
      }
      uVar20 = (*(code *)puVar8)(uVar20,uVar14);
      if (lVar10 == 0x7fffffffffffffff) goto LAB_0058c7c9;
      uVar17 = uVar17 - uVar14;
    } while (uVar17 != 0);
LAB_0058c77d:
    lVar11 = 0;
    break;
  case 2:
    lVar11 = <serde_json[dc3825464c436029]::number::Number_as_serde_core[48776c27239fa21f]::ser::Serialize>
             ::serialize::
             <&mut_serde_json[dc3825464c436029]::ser::Serializer<&mut_bytes[e9829e187354639b]::buf::writer::Writer<bytes[e9829e187354639b]::bytes_mut::BytesMut>>>
                       (&uStack_210,&local_b0);
    break;
  case 3:
    lVar10 = serde_json[dc3825464c436029]::ser::format_escaped_str::
             <&mut_bytes[e9829e187354639b]::buf::writer::Writer<bytes[e9829e187354639b]::bytes_mut::BytesMut>,serde_json[dc3825464c436029]::ser::CompactFormatter>
                       (&local_b0,auStack_a8,CONCAT44(uStack_204,local_208),
                        CONCAT44(uStack_1fc,uStack_200));
    if (lVar10 == 0) {
      lVar11 = 0;
    }
    else {
LAB_0058c7c9:
      lVar11 = (*(code *)PTR_io_00799780)();
    }
    break;
  case 4:
    lVar11 = <&mut_serde_json[dc3825464c436029]::ser::Serializer<&mut_bytes[e9829e187354639b]::buf::writer::Writer<bytes[e9829e187354639b]::bytes_mut::BytesMut>>as_serde_core[48776c27239fa21f]::ser::Serializer>
             ::collect_seq::
             <&alloc[12e961f32105355]::vec::Vec<serde_json[dc3825464c436029]::value::Value>>
                       (&local_b0,&uStack_210);
    break;
  case 5:
    lVar10 = CONCAT44(uStack_1fc,uStack_200);
    (*(code *)PTR_put_slice_00799c88)(&switchD_0058c615::switchdataD_0019c708,1);
    lVar11 = lStack_1f0;
    cVar9 = '\x01';
    if (lVar10 == 0) {
      (*(code *)PTR_put_slice_00799c88)(0x7fffffffffffffff,lStack_1f0 != 0x7fffffffffffffff);
      if (lVar11 == 0x7fffffffffffffff) {
LAB_0058c820:
        lVar11 = (*(code *)PTR_io_00799780)();
        break;
      }
      cVar9 = '\0';
    }
    local_178 = '\0';
    ppuStack_170 = &local_b0;
    uVar14 = CONCAT44(uStack_20c,uStack_210);
    uVar17 = CONCAT44(uStack_204,local_208);
    bVar19 = uVar14 != 0;
    if (!bVar19) {
      lVar10 = 0;
    }
    uVar13 = 0;
    cStack_177 = cVar9;
    do {
      bVar18 = lVar10 == 0;
      lVar10 = lVar10 + -1;
      if (bVar18) {
        if (local_178 == '\x01') {
          (*(code *)PTR_panic_00799338)
                    (uVar14,&
                            PTR_anon_dd81358582bfba60c2fc675a0b056dad_4_llvm_5330800135125066393_0078de58
                    );
          goto LAB_0058cd30;
        }
        if (cStack_177 == '\0') {
          lVar11 = 0;
        }
        else {
          lVar10 = (*ppuStack_170)[1];
          (*(code *)PTR_put_slice_00799c88)(0x7fffffffffffffff,lVar10 != 0x7fffffffffffffff);
          if (lVar10 == 0x7fffffffffffffff) goto LAB_0058c820;
          lVar11 = 0;
        }
        break;
      }
      if (!bVar19) {
        (*(code *)PTR_unwrap_failed_00799278)();
        goto LAB_0058cd30;
      }
      if (uVar13 == 0) {
        if (uVar17 == 0) {
          uVar13 = uVar14;
        }
        else {
          uVar12 = uVar17;
          if ((uVar17 & 7) != 0) {
            uVar13 = 0;
            do {
              uVar14 = *(ulonglong *)(uVar14 + 0x278);
              uVar13 = uVar13 + 1;
            } while ((uVar17 & 7) != uVar13);
            uVar12 = uVar17 - uVar13;
          }
          uVar13 = uVar14;
          if (7 < uVar17) {
            do {
              uVar14 = *(ulonglong *)
                        (*(longlong *)
                          (*(longlong *)
                            (*(longlong *)
                              (*(longlong *)
                                (*(longlong *)
                                  (*(longlong *)(*(longlong *)(uVar14 + 0x278) + 0x278) + 0x278) +
                                0x278) + 0x278) + 0x278) + 0x278) + 0x278);
              uVar12 = uVar12 - 8;
              uVar13 = uVar14;
            } while (uVar12 != 0);
          }
        }
        uVar12 = 0;
        uVar14 = 0;
        if (*(short *)(uVar13 + 0x272) != 0) goto LAB_0058ca78;
LAB_0058cb40:
        do {
          uVar15 = *(ulonglong *)(uVar13 + 0x160);
          if (uVar15 == 0) {
            (*(code *)PTR_unwrap_failed_00799278)();
            goto LAB_0058cd30;
          }
          uVar14 = uVar14 + 1;
          puVar1 = (ushort *)(uVar13 + 0x270);
          uVar12 = (ulonglong)*puVar1;
          uVar13 = uVar15;
        } while (*(ushort *)(uVar15 + 0x272) <= *puVar1);
      }
      else {
        uVar12 = uVar17;
        if (*(ushort *)(uVar13 + 0x272) <= uVar17) goto LAB_0058cb40;
LAB_0058ca78:
        uVar15 = uVar13;
      }
      uVar13 = uVar15;
      if (uVar14 == 0) {
        uVar17 = uVar12 + 1;
      }
      else {
        puVar16 = (ulonglong *)(uVar15 + uVar12 * 8 + 0x280);
        uVar17 = uVar14;
        if ((uVar14 & 7) != 0) {
          uVar17 = 0;
          do {
            uVar13 = *puVar16;
            puVar16 = (ulonglong *)(uVar13 + 0x278);
            uVar17 = uVar17 + 1;
          } while ((uVar14 & 7) != uVar17);
          uVar17 = uVar14 - uVar17;
        }
        if (7 < uVar14) {
          do {
            uVar13 = *(ulonglong *)
                      (*(longlong *)
                        (*(longlong *)
                          (*(longlong *)
                            (*(longlong *)
                              (*(longlong *)(*(longlong *)(*puVar16 + 0x278) + 0x278) + 0x278) +
                            0x278) + 0x278) + 0x278) + 0x278);
            puVar16 = (ulonglong *)(uVar13 + 0x278);
            uVar17 = uVar17 - 8;
          } while (uVar17 != 0);
        }
        uVar17 = 0;
      }
      lVar11 = <serde_json[dc3825464c436029]::ser::Compound<&mut_bytes[e9829e187354639b]::buf::writer::Writer<bytes[e9829e187354639b]::bytes_mut::BytesMut>,serde_json[dc3825464c436029]::ser::CompactFormatter>as_serde_core[48776c27239fa21f]::ser::SerializeMap>
               ::serialize_entry::
               <alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>
                         (&local_178,uVar15 + uVar12 * 0x18 + 0x168,uVar12 * 0x20 + uVar15);
      bVar19 = true;
      uVar14 = 0;
    } while (lVar11 == 0);
  }
  local_178 = (char)local_1f8;
  cStack_177 = (char)((ulonglong)local_1f8 >> 8);
  uStack_176 = (undefined2)((ulonglong)local_1f8 >> 0x10);
  uStack_174 = local_1f8._4_4_;
  ppuStack_170 = (undefined8 **)lStack_1f0;
  local_168 = (undefined4)local_1e8;
  uStack_164 = local_1e8._4_4_;
  uStack_160 = (undefined4)uStack_1e0;
  uStack_15c = uStack_1e0._4_4_;
  (*(code *)PTR_make_response_00799f78)((undefined4)local_1f8,lVar11);
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
            (&local_218,&local_178);
  local_188 = local_40;
  uStack_180 = uStack_38;
  local_198 = local_50;
  uStack_190 = uStack_48;
  local_1a8 = local_60;
  uStack_1a0 = uStack_58;
  local_1b8 = local_70;
  uStack_1b0 = uStack_68;
  local_1c8 = local_80;
  uStack_1c4 = uStack_7c;
  uStack_1c0 = uStack_78;
  uStack_1bc = uStack_74;
  local_1d8 = local_90;
  uStack_1d4 = uStack_8c;
  uStack_1d0 = uStack_88;
  uStack_1cc = uStack_84;
  local_1f8 = local_b0;
  lStack_1f0 = auStack_a8[0];
  local_c0 = (undefined4)local_f8;
  uStack_bc = local_f8._4_4_;
  uStack_b8 = (undefined4)uStack_f0;
  uStack_b4 = uStack_f0._4_4_;
  local_e0 = uVar3;
  local_d8 = uVar4;
  local_d0 = uVar5;
  local_c8 = uVar6;
  <[(http[56314f485c23ccf6]::header::name::HeaderName,&str);1:usize]as_axum_core[61c49771464cda0a]::response::into_response_parts::IntoResponseParts>
  ::into_response_parts(&local_178,&local_e0,&local_1f8);
  if (CONCAT22(uStack_176,CONCAT11(cStack_177,local_178)) == -1) {
    <axum_core[61c49771464cda0a]::response::into_response_parts::TryIntoHeaderError<core[c0acaeba6ab4c2e0]::convert::Infallible,http[56314f485c23ccf6]::header::value::InvalidHeaderValue>as_axum_core[61c49771464cda0a]::response::into_response::IntoResponse>
    ::into_response(param_1);
  }
  else {
    param_1[0xc] = local_118;
    param_1[0xd] = uStack_110;
    param_1[10] = local_128;
    param_1[0xb] = uStack_120;
    param_1[8] = local_138;
    param_1[9] = uStack_130;
    param_1[6] = local_148;
    param_1[7] = uStack_140;
    param_1[4] = local_158;
    param_1[5] = uStack_150;
    param_1[2] = CONCAT44(uStack_164,local_168);
    param_1[3] = CONCAT44(uStack_15c,uStack_160);
    *param_1 = CONCAT44(uStack_174,CONCAT22(uStack_176,CONCAT11(cStack_177,local_178)));
    param_1[1] = ppuStack_170;
    param_1[0xe] = local_108;
    param_1[0xf] = uStack_100;
    *(undefined2 *)(param_1 + 0xd) = uVar2;
  }
  return param_1;
}


