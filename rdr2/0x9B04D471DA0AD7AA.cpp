// beat_burning_bodies.ysc @ L484
void func_21(int iParam0)
{
  vector3 vVar0;
  vector3 vVar3;

  if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iParam0))
  {
    vVar0 = { 0f, 0f, 0f };
    if (!Local_899.f_50)
    {
      vVar3 = { Local_14.f_162[5 /*3*/], Local_14.f_162[5 /*3*/].f_1, (Local_14.f_162[5 /*3*/].f_2 - 1f) };
    }
    if (!func_63(2, 0))
    {
      iParam0 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_beat_burning_body_smk_start", vVar3, vVar0, 1f, false, false, false, true);
      func_5(2);
    }
    GRAPHICS::SET_PARTICLE_FX_LOOPED_FAR_CLIP_DIST(iParam0, 100f);
  }
}