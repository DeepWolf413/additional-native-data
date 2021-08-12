// am_mp_casino.ysc @ L358726
void func_5977(var uParam0, bool bParam1)
{
  if (PED::IS_PED_INJURED(uParam0->f_276))
  {
    return;
  }
  if (bParam1)
  {
    if (!func_5894(uParam0, 65))
    {
      func_5891(uParam0, 65);
      AUDIO::_0xF8AD2EED7C47E8FE(uParam0->f_276, bParam1, true);
    }
  }
  else if (func_5894(uParam0, 65))
  {
    func_5928(uParam0, 65);
    AUDIO::_0xF8AD2EED7C47E8FE(uParam0->f_276, bParam1, true);
  }
}