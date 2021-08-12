// marston6.ysc @ L68761
void func_1792()
{
  if (PED::IS_PED_IN_VEHICLE(Global_35, iLocal_557[1], false) && TASK::GET_VEHICLE_WAYPOINT_PROGRESS(iLocal_557[1]) == 120)
  {
    func_173();
    if (MAP::DOES_BLIP_EXIST(iLocal_578[13]))
    {
      MAP::REMOVE_BLIP(&(iLocal_578[13]));
    }
    if (MAP::DOES_BLIP_EXIST(iLocal_578[14]))
    {
      MAP::REMOVE_BLIP(&(iLocal_578[14]));
    }
    if (MAP::DOES_BLIP_EXIST(iLocal_578[15]))
    {
      MAP::REMOVE_BLIP(&(iLocal_578[15]));
    }
    if (MAP::DOES_BLIP_EXIST(iLocal_578[16]))
    {
      MAP::REMOVE_BLIP(&(iLocal_578[16]));
    }
    if (MAP::DOES_BLIP_EXIST(iLocal_578[17]))
    {
      MAP::REMOVE_BLIP(&(iLocal_578[17]));
    }
    EVENT::REMOVE_SHOCKING_EVENT(iLocal_734);
    EVENT::REMOVE_SHOCKING_EVENT(iLocal_735);
  }
}