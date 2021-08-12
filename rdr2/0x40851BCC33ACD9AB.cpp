// beat_public_hanging.ysc @ L6741
void func_178()
{
  if (iLocal_980 != 0)
  {
    if (!LAW::_0x40851BCC33ACD9AB(iLocal_980))
    {
      if (iLocal_980 != iLocal_946[0])
      {
        if (iLocal_109 == 1)
        {
          if (iLocal_980 != iLocal_946[4] && iLocal_980 != iLocal_946[5])
          {
            func_48(iLocal_1092);
            TASK::CLEAR_PED_TASKS(iLocal_980, true, false);
            EVENT::_0x7C511E91738A0828(iLocal_980, Global_35, 14, 0);
            ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_980);
            iLocal_1025++;
          }
        }
        else
        {
          func_48(iLocal_1092);
          TASK::CLEAR_PED_TASKS(iLocal_980, true, false);
          EVENT::_0x7C511E91738A0828(iLocal_980, Global_35, 14, 0);
          ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_980);
          iLocal_1025++;
        }
      }
    }
  }
}