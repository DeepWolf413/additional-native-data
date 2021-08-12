// odriscolls4.ysc @ L35802
bool func_777(var uParam0)
{
  if (!func_163(uLocal_402, 64))
  {
    func_1295(-356563546, 0, 0);
    func_1296(1, 1, 1);
    func_1275(1);
    func_174(1);
    func_1279(2, 0, 0);
    func_199(1);
    func_1274(Local_311[0 /*10*/], joaat("WEAPON_REVOLVER_SCHOFIELD_DUTCH"), 1, 0, 0, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
    func_1274(Local_311[0 /*10*/], joaat("WEAPON_REVOLVER_SCHOFIELD_DUTCH_DUALWIELD"), 1, 0, 1, 1, 1, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
    func_468(1163459288, 0, 0f, 0, 0, 0, 1, 0);
    iLocal_375[0] = VOLUME::_0x0EB78C2B156635B1(joaat("VOLBOX"), 1888.236f, -1859.113f, 47.86352f, 0f, 0f, -39.87801f, 3.587574f, 4.234103f, 3.8729f);
    TASK::_0xEB2ED1DC3AEC0654(iLocal_1179[2], 1, 1, 1, 0);
    func_867(&uLocal_402, 64);
  }
  AICOVERPOINT::_0x140B3CB1D424A945(Local_311[0 /*10*/], joaat("WEAPON_REVOLVER_SCHOFIELD_DUTCH_DUALWIELD"));
  if (!AICOVERPOINT::_0x8CBE916CFC64AD5C(Local_311[0 /*10*/]))
  {
    return false;
  }
  func_909(Local_210[4 /*10*/], 1876.759f, -1839.193f, 42.4785f, -175f, 2, 1073741824 /* Float: 2f */);
  TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(Local_311[0 /*10*/], func_182(3, 0), -1, 1, 0f, 0, 0, iLocal_363[1], 0, 1, 0);
  AICOVERPOINT::_0x1A7A802B2301EDC0(Local_311[0 /*10*/]);
  func_921(&uLocal_402, 64);
  func_920(0, 0);
  return uParam0->f_607 == uParam0->f_607;
}