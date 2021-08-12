// gang2.ysc @ L36867
void func_814(int iParam0, float fParam1)
{
  int iVar0;
  int iVar1;
  char* sVar2;
  float fVar3;
  float fVar4;

  iVar0 = iLocal_378[1];
  iVar1 = iLocal_381[1];
  if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || !ENTITY::DOES_ENTITY_EXIST(iVar1))
  {
    return;
  }
  if ((iParam0 != iLocal_302 && iParam0 != iLocal_303) && iParam0 != iLocal_304)
  {
    return;
  }
  sVar2 = "scR_gang2_air_balloon_smoke";
  if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_908))
  {
    iLocal_908 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY(sVar2, iVar1, 0f, 0f, -5f, 0f, 0f, 90f, 1f, false, false, false);
    AUDIO::_PLAY_SOUND_FROM_ENTITY("BURNER_SPUTTER", iLocal_378[1], "BALLOON_SOUNDSET", false, 0, 0);
  }
  else
  {
    fVar3 = (0f + (fParam1 * (0.8f - 0f)));
    GRAPHICS::SET_PARTICLE_FX_LOOPED_ALPHA(iLocal_908, fVar3);
    fVar4 = (0.8f + (fParam1 * (1.5f - 0.8f)));
    GRAPHICS::SET_PARTICLE_FX_LOOPED_SCALE(iLocal_908, fVar4);
  }
}