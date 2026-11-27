// 00064d80 {closure#0}

/* std[6c98fd8553dbae28]::env::remove_var::<&str>::{closure#0} */

void __rustcall
std[6c98fd8553dbae28]::env::remove_var::<&str>::_closure_0_
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 local_40 [3];
  undefined8 local_28;
  code *local_20;
  undefined8 *local_18;
  undefined *local_10;
  
  local_20 = <&std[6c98fd8553dbae28]::ffi::os_str::OsStr_as_core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt
  ;
  local_18 = local_40;
  local_10 = PTR_fmt_000c3bb8;
  local_40[0] = param_2;
  local_28 = param_1;
  (*(code *)PTR_panic_fmt_000c3e90)
            (param_4,&anon_9fa032a1d30ceca52b5a2d5222eaa356_9_llvm_10768355879922845107);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


