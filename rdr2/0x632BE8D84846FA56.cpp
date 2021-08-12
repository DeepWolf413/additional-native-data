// gang2.ysc @ L60978
void func_1558(char[4] cParam0)
{
  if (func_33(cParam0) < 8)
  {
    if (func_33(cParam0) == 5 || func_33(cParam0) == 6)
    {
      if (!CAM::_0xA24C1D341C6E0D53(0, 0, 0))
      {
        CAM::_0x8370D34BD2E60B73();
      }
    }
    else if (PED::IS_PED_IN_VEHICLE(Global_35, iLocal_378[1], false) || func_33(cParam0) == 3)
    {
      if (!CAM::_0xA24C1D341C6E0D53(0, 0, 0))
      {
        CAM::_0x1CFB749AD4317BDE();
      }
      CAM::_0xD904F75DBD7AB865(iLocal_378[1]);
    }
    else if (!CAM::_0xA24C1D341C6E0D53(0, 0, 0))
    {
      CAM::_0x632BE8D84846FA56();
    }
    if (func_172(iLocal_315[3], 0))
    {
      CAM::_0xD904F75DBD7AB865(iLocal_315[3]);
    }
    if (((func_33(cParam0) == 5 && iLocal_1158 >= 2) || func_33(cParam0) == 6) || func_33(cParam0) == 7)
    {
      CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
    }
  }
}