// 006bf240 fmt

/* <httparse[622c0e90ae307373]::Header as core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt */

void __rustcall
<httparse[622c0e90ae307373]::Header_as_core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt(longlong param_1)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int local_38;
  undefined1 local_20 [16];
  
  (*(code *)PTR_debug_struct_00799f60)(6,"Header");
  uVar3 = (*(code *)PTR_field_0079a400)(param_1,4,&DAT_00792cb0);
  (*(code *)PTR_from_utf8_00799468)(uVar3,*(undefined8 *)(param_1 + 0x18));
  if (local_38 == 1) {
    puVar1 = (undefined1 *)(param_1 + 0x10);
    puVar2 = &DAT_00792cd0;
  }
  else {
    puVar2 = &DAT_00792cb0;
    puVar1 = local_20;
  }
  (*(code *)PTR_field_0079a400)(puVar1,5,puVar2);
  (*(code *)PTR_finish_0079a408)();
  return;
}


