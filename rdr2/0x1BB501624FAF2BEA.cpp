// dominoes_launch_sp.ysc @ L5699
void func_137(var uParam0, int iParam1, int iParam2)
{
  if (iParam1 < 0 || iParam1 >= 32)
  {
    return;
  }
  if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_199[iParam1 /*24*/].f_4))
  {
    uParam0->f_199[iParam1 /*24*/].f_4 = iParam2;
  }
  if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_199[iParam1 /*24*/].f_4))
  {
    uParam0->f_199[iParam1 /*24*/] = 5;
    uParam0->f_199[iParam1 /*24*/].f_13 = 0;
    uParam0->f_199[iParam1 /*24*/].f_1 = ENTITY::GET_ENTITY_MODEL(uParam0->f_199[iParam1 /*24*/].f_4);
    uParam0->f_199[iParam1 /*24*/].f_16 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_199[iParam1 /*24*/].f_4, true, false) };
    uParam0->f_199[iParam1 /*24*/].f_19 = { ENTITY::GET_ENTITY_ROTATION(uParam0->f_199[iParam1 /*24*/].f_4, 2) };
    uParam0->f_199[iParam1 /*24*/].f_23 = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_ALPHA(uParam0->f_199[iParam1 /*24*/].f_4));
    if (!DECORATOR::DECOR_EXIST_ON(uParam0->f_199[iParam1 /*24*/].f_4, "MinigameObject"))
    {
      DECORATOR::DECOR_SET_BOOL(uParam0->f_199[iParam1 /*24*/].f_4, "MinigameObject", true);
    }
  }
}