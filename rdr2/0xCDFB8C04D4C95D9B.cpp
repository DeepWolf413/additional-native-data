// rcm_here_kitty_kitty2.ysc @ L16319
void func_593()
{
  float fVar0;
  float fVar1;
  float fVar2;

  if (!MAP::DOES_BLIP_EXIST(iLocal_51))
  {
    iLocal_51 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_COMPANION"), iLocal_105);
    MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_51, "KTTY2_B_ZEBRA");
  }
  PED::_0x2EB75FB86C41F026(iLocal_105, 3, 0);
  PED::_0xCDFB8C04D4C95D9B(iLocal_105, 3, 1f, 0);
  fVar0 = 5f;
  fVar1 = 5f;
  fVar2 = 5f;
  TASK::TASK_FOLLOW_AND_CONVERSE_WITH_PED(iLocal_105, Global_35, 0, 0, -1082130432 /* Float: -1f */, fVar0, 8, fVar1, fVar2, 1069547520 /* Float: 1.5f */, 1073741824 /* Float: 2f */);
  if (iLocal_14 != 2)
  {
    iLocal_14 = 2;
  }
  bLocal_78 = true;
  iLocal_112 = 3;
}