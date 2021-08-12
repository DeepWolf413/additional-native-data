// beat_campfire_ambush.ysc @ L2034
void func_65(var uParam0, vector3 vParam1, int iParam4, float fParam5)
{
  float fVar0;

  fParam5 = func_194(vParam1, fParam5);
  fVar0 = func_195(fParam5, iParam4);
  if (fVar0 < 1f)
  {
    GRAPHICS::_0x9DDC222D85D5AF2A(*uParam0, uParam0->f_3);
    GRAPHICS::SET_PARTICLE_FX_LOOPED_ALPHA(*uParam0, fVar0);
  }
}