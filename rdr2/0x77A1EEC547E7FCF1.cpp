// mudtown3b.ysc @ L57626
void func_1523(int iParam0, int iParam1)
{
  struct<27> Var0;

  if (ENTITY::DOES_ENTITY_EXIST(iParam0))
  {
    if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, sLocal_46, func_2111(iParam1), 1))
    {
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
      Var0.f_4 = 2f;
      Var0 = 1;
      Var0.f_1 = sLocal_46;
      Var0.f_2 = func_2111(iParam1);
      Var0.f_20 = 278;
      Var0.f_22 = 1;
      TASK::PLAY_ENTITY_SCRIPTED_ANIM(iParam0, &Var0);
    }
  }
}