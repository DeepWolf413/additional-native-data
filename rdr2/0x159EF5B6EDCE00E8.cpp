// beat_outlaw_transport.ysc @ L13071
void func_335()
{
  if (ENTITY::DOES_ENTITY_EXIST(iLocal_818))
  {
    if (!func_50(iLocal_819, 16777216))
    {
      if (AITRANSPORT::_0x159EF5B6EDCE00E8(uLocal_801[6], iLocal_818))
      {
        if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_801[6], 1403772282))
        {
          func_24(&iLocal_819, 16777216);
          func_81(uLocal_801[6], 0);
          if (AITRANSPORT::_0x159EF5B6EDCE00E8(uLocal_801[6], iLocal_818))
          {
            AITRANSPORT::_0x8886D83A430537FD(uLocal_801[6], 0);
          }
        }
      }
    }
    else if (AITRANSPORT::_0x159EF5B6EDCE00E8(uLocal_801[6], iLocal_818))
    {
      AITRANSPORT::_0x8886D83A430537FD(uLocal_801[6], 0);
    }
  }
}