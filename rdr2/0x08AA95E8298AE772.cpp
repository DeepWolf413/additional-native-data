// beat_train_holdup.ysc @ L8630
void func_220()
{
  struct<16> Var0;

  if (bLocal_1400)
  {
    return;
  }
  if (func_115(iLocal_1248[3], 0, 1) && PED::IS_PED_ON_MOUNT(iLocal_1248[3]))
  {
    if (func_180(Global_35, iLocal_1248[3], 1) < 1600f)
    {
      Var0 = Global_35;
      Var0.f_6 = 1;
      Var0.f_4 = 8200;
      Var0.f_15 = 1;
      WEAPON::_0x5230D3F6EE56CFE6(iLocal_1248[3], 0);
      TASK::TASK_SHOOT_WITH_WEAPON(iLocal_1248[3], &Var0);
      bLocal_1400 = true;
    }
  }
}