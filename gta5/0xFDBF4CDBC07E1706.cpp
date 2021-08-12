// am_mp_property_int.ysc @ L276494
void func_3122()
{
  struct<3> Var0;
  
  Var0 = { Global_3934119[bLocal_526 /*2012*/].f_146.f_47 };
  if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("am_mp_yacht")) <= 0)
  {
    if (iLocal_333 == -1)
    {
      iLocal_333 = WATER::_ADD_CURRENT_RISE((Var0.x - 200f), (Var0.f_1 - 200f), (Var0.x + 200f), (Var0.f_1 + 200f), 0.02f);
      WATER::_0x547237AA71AB44DE(0.02f);
    }
  }
  else if (!func_48(PLAYER::PLAYER_ID()))
  {
    if (iLocal_333 != -1)
    {
      WATER::_REMOVE_CURRENT_RISE(iLocal_333);
      WATER::_0x547237AA71AB44DE(1f);
      iLocal_333 = -1;
    }
  }
}