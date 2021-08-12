// agency_heist3a.ysc @ L124162
void func_902(bool bParam0)
{
  STREAMING::REMOVE_ANIM_DICT(func_568());
  STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_577());
  STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_579());
  if (bParam0)
  {
    PHYSICS::ROPE_UNLOAD_TEXTURES();
  }
}