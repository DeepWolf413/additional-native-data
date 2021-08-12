// sadie4.ysc @ L33402
bool func_726(var uParam0)
{
  func_1187(iLocal_137, func_1186(0, 1), 2, 1073741824 /* Float: 2f */);
  func_819(Local_47.f_1, -2042.003f, -1801.855f, 114.6679f, 20f, 2, 1073741824 /* Float: 2f */);
  func_1187(Global_35, func_1186(0, 2), 2, 1073741824 /* Float: 2f */);
  func_1162(uParam0, "MultiStart");
  if (!func_1204())
  {
    return false;
  }
  TASK::TASK_PLAY_ANIM(iLocal_217, "AI_DAMAGE@DEAD@BASE", "dead_c", 1000f, -4f, -1, 139268, 0.99f, false, 0, false, 0, false);
  PED::_0x2208438012482A1A(iLocal_217, false, false);
  func_1205(Global_35, 1, 1);
  WEAPON::_0x0A2AB7B7ABC055F4(Global_35);
  if (!func_1202(uParam0, 0))
  {
    return false;
  }
  if (func_120(uParam0, 4))
  {
    func_819(Local_100, -2085.96f, -1907.82f, 113.56f, -61.22f, 2, 1073741824 /* Float: 2f */);
  }
  if (!func_1206(uParam0))
  {
    return false;
  }
  func_1207(uParam0);
  return uParam0->f_607 == uParam0->f_607;
}