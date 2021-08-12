// beat_dark_alley_bum.ysc @ L2087
void func_54()
{
  if (iLocal_772 == 0)
  {
    if (ENTITY::DOES_ENTITY_EXIST(Local_271[3 /*12*/].f_8))
    {
      if (ENTITY::_0x5AFFA9DDC87846F8(Local_271[3 /*12*/].f_7))
      {
        TASK::_0x78B4567E18B54480(Local_271[3 /*12*/].f_8);
        GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_gen_shiny_bling", Local_271[3 /*12*/].f_8, 0f, 0f, 0f, 0f, 0f, 0f, 1f, true, false, false);
        ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_271[3 /*12*/].f_8));
      }
    }
    if (ENTITY::DOES_ENTITY_EXIST(Local_271[4 /*12*/].f_8) && func_50(iLocal_718, 4))
    {
      if (ENTITY::_0x5AFFA9DDC87846F8(Local_271[4 /*12*/].f_7))
      {
        TASK::_0x78B4567E18B54480(Local_271[4 /*12*/].f_8);
        GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_gen_shiny_bling", Local_271[4 /*12*/].f_8, 0f, 0f, 0f, 0f, 0f, 0f, 1f, true, false, false);
        ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_271[4 /*12*/].f_8));
      }
    }
    iLocal_772 = 1;
  }
}