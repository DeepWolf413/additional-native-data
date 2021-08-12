// am_mp_smpl_interior_int.ysc @ L298788
void func_4890()
{
  func_4878(1);
  func_4887(0);
  Global_1683970.f_506 = 1;
  func_4897(0);
  func_4896(0);
  func_4895(0);
  func_4894(1);
  func_4893(0);
  func_4892(0);
  func_4891(0);
  if (Local_303.f_518 != -1)
  {
    if (MISC::DOES_POP_MULTIPLIER_SPHERE_EXIST(Local_303.f_518))
    {
      MISC::REMOVE_POP_MULTIPLIER_SPHERE(Local_303.f_518, true);
    }
  }
  TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
  MISC::CLEAR_BIT(&Local_303, 9);
  MISC::CLEAR_BIT(&Local_303, 17);
  func_4(1);
}