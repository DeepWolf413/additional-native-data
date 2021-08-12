// gang3.ysc @ L72945
void func_1879(var uParam0)
{
  var uVar0;
  var uVar1;
  int iVar2;
  int iVar3;

  if (func_446(56))
  {
    return;
  }
  if (func_446(47) || func_446(48))
  {
    func_902(56, 1);
    return;
  }
  if (func_163(Local_380[1 /*8*/], 0) || func_163(Local_380[0 /*8*/], 0))
  {
    return;
  }
  uVar0 = PED::_0x06FA94C835787C64(Local_380[1 /*8*/]);
  uVar1 = PED::_0x06FA94C835787C64(Local_380[0 /*8*/]);
  iVar2 = func_2441(Local_380[1 /*8*/], Global_35);
  iVar3 = func_2441(Local_380[0 /*8*/], Global_35);
  if (((uVar0 && uVar1) && iVar2) && iVar3)
  {
    func_2442(uParam0, joaat("GNG3_HEADSHOTGUARDS"));
  }
  func_902(56, 1);
}