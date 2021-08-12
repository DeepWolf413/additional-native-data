// rcm_bh_bandito_mine.ysc @ L17858
void func_598()
{
  if (!bLocal_542)
  {
    if ((!func_79(&uLocal_543) && func_216(Global_35, vLocal_467, 125f, 1, 1)) && ENTITY::DOES_ENTITY_EXIST(Local_851[1 /*41*/]))
    {
      FIRE::ADD_OWNED_EXPLOSION(Local_851[1 /*41*/], -5959f, -3219f, -15f, 25, 1f, true, false, 1f);
      func_80(&uLocal_543, 0);
    }
    else if (func_354(&uLocal_543) > 25f && func_216(Global_35, vLocal_467, 125f, 1, 1))
    {
      FIRE::ADD_OWNED_EXPLOSION(Local_851[1 /*41*/], -5959f, -3219f, -15f, 25, 1f, true, false, 1f);
      func_80(&uLocal_543, 1);
    }
  }
  if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_546))
  {
    iLocal_546 = VOLUME::_CREATE_VOLUME_SPHERE(-6011.534f, -3281.546f, -14.305f, 0f, 0f, -10.696f, 95.326f, 107.8175f, 26.692f);
  }
  if (func_734(Global_35, iLocal_546, 0, 1) && !bLocal_542)
  {
    ANIMSCENE::SET_ANIM_SCENE_BOOL(vLocal_16[0 /*3*/], "LOOP_BOOL", true, false);
    bLocal_542 = true;
  }
}