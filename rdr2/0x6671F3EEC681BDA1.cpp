// beat_sharp_shooter.ysc @ L17670
void func_416()
{
  int iVar0;

  TASK::OPEN_SEQUENCE_TASK(&iVar0);
  if (Local_216.f_2 <= 1)
  {
    if (func_594(iLocal_284, Global_35))
    {
      func_255(0, 1, "CHALLENGE_04_L_SHOOTER", -1, 1082130432 /* Float: 4f */, -1065353216 /* Float: -4f */, 0, 0);
    }
    else
    {
      func_255(0, 1, "CHALLENGE_04_R_SHOOTER", -1, 1082130432 /* Float: 4f */, -1065353216 /* Float: -4f */, 0, 0);
    }
  }
  else if (func_594(iLocal_284, Global_35))
  {
    func_255(0, 1, "CHALLENGE_06_L_SHOOTER", -1, 1082130432 /* Float: 4f */, -1065353216 /* Float: -4f */, 0, 0);
  }
  else
  {
    func_255(0, 1, "CHALLENGE_06_R_SHOOTER", -1, 1082130432 /* Float: 4f */, -1065353216 /* Float: -4f */, 0, 0);
  }
  TASK::TASK_AIM_GUN_AT_COORD(0, Local_216.f_7, -1, false, false);
  func_52(iLocal_284, &iVar0, 0, 0, 1, 1);
}