// 0071ddc0 end

/* <serde_json[dc3825464c436029]::value::ser::SerializeMap as
   serde_core[48776c27239fa21f]::ser::SerializeStruct>::end */

char * __rustcall
<serde_json[dc3825464c436029]::value::ser::SerializeMap_as_serde_core[48776c27239fa21f]::ser::SerializeStruct>
::end(char *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  char *pcVar8;
  undefined4 uStack_27;
  undefined4 uStack_23;
  undefined4 uStack_1f;
  undefined4 uStack_1b;
  
  lVar1 = *param_2;
  if (lVar1 == -2) {
    lVar1 = param_2[1];
    if ((char)lVar1 == -1) {
      (*(code *)PTR_expect_failed_00799440)
                (param_4,&
                         PTR_anon_63b06cc94833867f683611f039574387_74_llvm_6903579140370050947_00795bf0
                );
      pcVar3 = (code *)swi(3);
      pcVar8 = (char *)(*pcVar3)();
      return pcVar8;
    }
    uVar4 = *(undefined8 *)((longlong)param_2 + 9);
    uVar5 = *(undefined8 *)((longlong)param_2 + 0x11);
    lVar2 = param_2[4];
    *(longlong *)(param_1 + 0x10) = param_2[3];
    *(longlong *)(param_1 + 0x18) = lVar2;
    *(undefined8 *)(param_1 + 1) = uVar4;
    *(undefined8 *)(param_1 + 9) = uVar5;
    *param_1 = (char)lVar1;
  }
  else {
    lVar2 = param_2[5];
    lVar6 = param_2[3];
    lVar7 = param_2[4];
    uStack_23._3_1_ = (undefined1)lVar6;
    uStack_1f = (undefined4)((ulonglong)lVar6 >> 8);
    uStack_1b._0_3_ = (undefined3)((ulonglong)lVar6 >> 0x28);
    uStack_1b._3_1_ = (undefined1)lVar7;
    *param_1 = '\x05';
    *(undefined4 *)(param_1 + 1) = uStack_27;
    *(undefined4 *)(param_1 + 5) = uStack_23;
    *(undefined4 *)(param_1 + 9) = uStack_1f;
    *(undefined4 *)(param_1 + 0xd) = uStack_1b;
    *(longlong *)(param_1 + 0x10) = lVar7;
    *(longlong *)(param_1 + 0x18) = lVar2;
    if (0 < lVar1) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_2[1],1);
      return param_1;
    }
  }
  return param_1;
}


