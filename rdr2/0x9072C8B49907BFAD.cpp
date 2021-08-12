// bathing.ysc @ L4797
void func_117(int iParam0)
{
  if ((((AUDIO::IS_AMBIENT_SPEECH_PLAYING(iParam0->f_144) || AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35)) || bLocal_24) || bLocal_34) || iLocal_77 == 1)
  {
    if (func_28(iLocal_17))
    {
      func_65(iLocal_17, 0, 1);
    }
    if (func_28(iLocal_16))
    {
      func_65(iLocal_16, 0, 1);
    }
  }
  else
  {
    if (func_28(iLocal_17))
    {
      func_65(iLocal_17, 1, 1);
    }
    if (func_28(iLocal_16))
    {
      func_65(iLocal_16, 1, 1);
    }
  }
  if (iLocal_44 > 7)
  {
    if (func_28(iLocal_17))
    {
      func_29(&iLocal_17, 1, 1);
    }
  }
}