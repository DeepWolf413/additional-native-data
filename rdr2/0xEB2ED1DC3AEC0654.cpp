// fussar1.ysc @ L34655
int func_755(var uParam0)
{
  struct<27> Var0;

  PED::_SET_PED_BLACKBOARD_FLOAT(iLocal_1282, "Cautious", 1f, -1);
  Var0.f_4 = 1065353216;
  Var0.f_5 = 1065353216;
  Var0.f_9 = 1065353216;
  Var0.f_10 = 1065353216;
  Var0.f_14 = 1065353216;
  Var0.f_15 = 1065353216;
  Var0.f_17 = 1040187392;
  Var0.f_18 = 1040187392;
  Var0.f_19 = -1;
  Var0.f_26 = -1082130432;
  func_1266(Local_14.f_8[0], iLocal_1282, &Var0, 0f, 0f, 0f, sLocal_214, 8, 1, 3f, 1f, 1073069561, 1f, 1092616192 /* Float: 10f */, -1, 1, 1, 0, 0, 1);
  func_1266(iLocal_1282, Global_35, &Var0, 0f, 0f, 0f, sLocal_214, 0, 1, 6f, 2f, 1073069561, 1f, 1092616192 /* Float: 10f */, -1, 1, 1, 0, 0, 1);
  func_1267(Global_35, iLocal_1282, &Var0, -1082130432 /* Float: -1f */, 0, 0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1, 8, 0, 0, 1069547520 /* Float: 1.5f */, 1073741824 /* Float: 2f */, 1050253722 /* Float: 0.3f */, 1067030938 /* Float: 1.2f */, 1, 0, -1, 1, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1);
  func_1268(&uLocal_421);
  func_983(&iLocal_1160);
  func_1269(Local_14.f_8[0]);
  if (func_1270(41))
  {
    func_422(&iLocal_355, 1073741824 /* Float: 2f */);
  }
  uLocal_1892[0] = VOLUME::_0x0EB78C2B156635B1(joaat("VOLBOX"), 1507.453f, -7188.91f, 64.27245f, 0f, 0f, -35.27511f, 1f, 5.937822f, 3.861137f);
  uLocal_1892[15] = VOLUME::_0x0EB78C2B156635B1(joaat("VOLBOX"), 1506.995f, -7174.416f, 65.43323f, 0f, 0f, 61.08812f, 3.408347f, 1.509223f, 3.168869f);
  TASK::_0xEB2ED1DC3AEC0654(uLocal_1892[15], 1, 1, 1, 1);
  uLocal_1892[16] = VOLUME::_0x0EB78C2B156635B1(joaat("VOLBOX"), 1502.173f, -7162.628f, 63.08029f, 0f, 0f, 17.68591f, 3.488952f, 1f, 2.971491f);
  TASK::_0xEB2ED1DC3AEC0654(uLocal_1892[16], 1, 1, 1, 1);
  func_450(&iLocal_356, 1);
  return 1;
}