// 001a3ca0 <&mut<serde_json[dc3825464c436029]::value::Value_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt::WriterFormatter,serde_json[dc3825464c436029]::ser::CompactFormatter>

/* serde_json[dc3825464c436029]::ser::format_escaped_str::<&mut
   <serde_json[dc3825464c436029]::value::Value as
   core[c0acaeba6ab4c2e0]::fmt::Display>::fmt::WriterFormatter,
   serde_json[dc3825464c436029]::ser::CompactFormatter> */

void __rustcall
serde_json[dc3825464c436029]::ser::format_escaped_str::
<&mut<serde_json[dc3825464c436029]::value::Value_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt::WriterFormatter,serde_json[dc3825464c436029]::ser::CompactFormatter>
          (undefined8 *param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  byte bVar1;
  char cVar2;
  undefined *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined1 local_42;
  char local_41;
  undefined4 local_40;
  undefined1 local_3c;
  undefined1 local_3b;
  undefined8 local_38;
  
  uVar6 = *param_1;
  lVar4 = <<serde_json[dc3825464c436029]::value::Value_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt::WriterFormatter_as_std[6c98fd8553dbae28]::io::Write>
          ::write_all(uVar6,"\"",1);
  puVar3 = PTR_ESCAPE_0021a128;
  if (lVar4 == 0) {
    local_38 = uVar6;
    do {
      uVar6 = local_38;
      lVar4 = 0;
      do {
        lVar5 = lVar4;
        if (param_4 == lVar5) {
          if ((param_4 == 0) ||
             (lVar4 = <<serde_json[dc3825464c436029]::value::Value_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt::WriterFormatter_as_std[6c98fd8553dbae28]::io::Write>
                      ::write_all(local_38,param_3,param_4), lVar4 == 0)) {
            <<serde_json[dc3825464c436029]::value::Value_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt::WriterFormatter_as_std[6c98fd8553dbae28]::io::Write>
            ::write_all(uVar6,"\"",1);
            return;
          }
          return;
        }
        bVar1 = *(byte *)(param_3 + lVar5);
        cVar2 = puVar3[bVar1];
        lVar4 = lVar5 + 1;
      } while (cVar2 == '\0');
      if ((lVar5 != 0) &&
         (lVar5 = <<serde_json[dc3825464c436029]::value::Value_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt::WriterFormatter_as_std[6c98fd8553dbae28]::io::Write>
                  ::write_all(local_38,param_3), lVar5 != 0)) {
        return;
      }
      if (cVar2 == 'u') {
        local_3c = PTR_HEX_DIGITS_0021a130[bVar1 >> 4];
        local_3b = PTR_HEX_DIGITS_0021a130[bVar1 & 0xf];
        local_40 = 0x3030755c;
        uVar6 = 6;
        puVar7 = &local_40;
      }
      else {
        local_42 = 0x5c;
        uVar6 = 2;
        puVar7 = (undefined4 *)&local_42;
        local_41 = cVar2;
      }
      lVar5 = <<serde_json[dc3825464c436029]::value::Value_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt::WriterFormatter_as_std[6c98fd8553dbae28]::io::Write>
              ::write_all(local_38,puVar7,uVar6);
      param_3 = param_3 + lVar4;
      param_4 = param_4 - lVar4;
    } while (lVar5 == 0);
  }
  return;
}


