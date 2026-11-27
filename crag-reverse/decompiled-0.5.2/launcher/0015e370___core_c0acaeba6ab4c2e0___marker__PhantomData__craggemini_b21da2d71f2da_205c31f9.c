// 0015e370 <core[c0acaeba6ab4c2e0]::marker::PhantomData<<craggemini[b21da2d71f2da7a3]::license::Term_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Field>>

/* <serde_json[dc3825464c436029]::de::UnitVariantAccess<serde_json[dc3825464c436029]::read::SliceRead>
   as 
   serde_core[48776c27239fa21f]::de::EnumAccess>::variant_seed::<core[c0acaeba6ab4c2e0]::marker::PhantomData<<craggemini[b21da2d71f2da7a3]::license::Term
   as serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Field>> */

undefined1 * __rustcall
<serde_json[dc3825464c436029]::de::UnitVariantAccess<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::EnumAccess>
::variant_seed::
<core[c0acaeba6ab4c2e0]::marker::PhantomData<<craggemini[b21da2d71f2da7a3]::license::Term_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Field>>
          (undefined1 *param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  ulonglong uVar5;
  undefined1 local_29;
  undefined8 local_28;
  short *local_20;
  longlong local_18;
  
  uVar1 = *(ulonglong *)(param_2 + 0x20);
  uVar2 = *(ulonglong *)(param_2 + 0x28);
  if (uVar2 < uVar1) {
    do {
      uVar2 = uVar2 + 1;
      uVar5 = (ulonglong)*(byte *)(*(longlong *)(param_2 + 0x18) + -1 + uVar2);
      if (0x22 < uVar5) {
LAB_0015e497:
        uVar3 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                ::peek_invalid_type(param_2,&local_29,
                                    anon_0a0c55df36321c68aaadd765a4eea261_66_llvm_6508678000359795294
                                   );
LAB_0015e468:
        local_20 = (short *)::<serde_json[dc3825464c436029]::error::Error>::fix_position::
                            <<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>::fix_position::_closure_0_>
                                      (uVar3,param_2);
        goto LAB_0015e473;
      }
      if ((0x100002600U >> (uVar5 & 0x3f) & 1) == 0) {
        if (uVar5 != 0x22) goto LAB_0015e497;
        *(ulonglong *)(param_2 + 0x28) = uVar2;
        *(undefined8 *)(param_2 + 0x10) = 0;
        (*(code *)PTR_parse_str_00219c90)(-uVar1,param_2);
        if ((int)local_28 != 2) {
          if (local_18 == 2) {
            if (*local_20 == anon_c9247e0b0208fc9c8c019285c3882aec_15_llvm_5798562142159169407) {
              uVar4 = 0;
LAB_0015e486:
              *param_1 = uVar4;
              *(longlong *)(param_1 + 8) = param_2;
              return param_1;
            }
            if (*local_20 == anon_c9247e0b0208fc9c8c019285c3882aec_16_llvm_5798562142159169407) {
              uVar4 = 1;
              goto LAB_0015e486;
            }
            if (*local_20 == anon_c9247e0b0208fc9c8c019285c3882aec_17_llvm_5798562142159169407) {
              uVar4 = 2;
              goto LAB_0015e486;
            }
            uVar4 = 3;
            if (*local_20 == anon_c9247e0b0208fc9c8c019285c3882aec_18_llvm_5798562142159169407)
            goto LAB_0015e486;
          }
          uVar3 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                  ::unknown_variant(local_20,local_18,
                                    &
                                    anon_c9247e0b0208fc9c8c019285c3882aec_52_llvm_5798562142159169407
                                    ,4);
          goto LAB_0015e468;
        }
        goto LAB_0015e473;
      }
      *(ulonglong *)(param_2 + 0x28) = uVar2;
    } while (uVar2 != uVar1);
  }
  local_28 = 5;
  local_20 = (short *)<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                      ::peek_error(param_2,&local_28);
LAB_0015e473:
  *(short **)(param_1 + 8) = local_20;
  *param_1 = 0xff;
  return param_1;
}


