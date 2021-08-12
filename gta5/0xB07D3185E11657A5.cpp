// am_mp_arcade.ysc @ L307244
void func_4808(var uParam0, bool bParam1)
{
  struct<4> Var0;
  
  if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_319))
  {
    if (NETWORK::NETWORK_HAS_ENTITY_BEEN_REGISTERED_WITH_THIS_THREAD(uParam0->f_319) && func_5(NETWORK::OBJ_TO_NET(uParam0->f_319)))
    {
      if (uParam0->f_444 == 0 && !bParam1)
      {
        func_4801(uParam0->f_318, (678 + uParam0->f_277), &Var0, func_4805(uParam0->f_318), 0);
        ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam0->f_319, Var0, false, false, true);
        ENTITY::SET_ENTITY_ROTATION(uParam0->f_319, Var0.f_3, 2, true);
      }
      else
      {
        if (func_124(PLAYER::PLAYER_ID()))
        {
          if (uParam0->f_277 != -1)
          {
            ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam0->f_319, uParam0->f_341[uParam0->f_277 /*6*/], false, false, true);
            ENTITY::SET_ENTITY_ROTATION(uParam0->f_319, uParam0->f_341[uParam0->f_277 /*6*/].f_3, 2, true);
          }
          uParam0->f_319 = 0;
          return;
        }
        ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam0->f_319, uParam0->f_279.f_6[0 /*6*/], false, false, true);
        ENTITY::SET_ENTITY_ROTATION(uParam0->f_319, uParam0->f_279.f_6[0 /*6*/].f_3, 2, true);
      }
      uParam0->f_319 = 0;
    }
  }
}