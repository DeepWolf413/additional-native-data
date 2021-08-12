// am_launcher.ysc @ L5173
void func_126(var uParam0)
{
  int iVar0;
  var* uVar1;
  var uVar2;
  
  iVar0 = unk_0x4D9115464D37FCEB(0);
  uVar1 = DATAFILE::DATADICT_GET_DICT(iVar0, "mission");
  Global_4456448.f_85965 = DATAFILE::DATADICT_GET_INT(iVar0, "debugOnlyVersion");
  func_127(&uVar1, uParam0, 0, &uVar2);
}