// fm_mission_controller.ysc @ L658637
void func_10904()
{
  int iVar0;
  
  iVar0 = 0;
  while (iVar0 < Global_4718592.f_61824)
  {
    if (Global_4718592.f_61833[iVar0 /*150*/].f_23 != -1 || Global_4718592.f_61833[iVar0 /*150*/].f_25 != -1)
    {
      if (OBJECT::DOES_PICKUP_EXIST(Global_4718592.f_61833[iVar0 /*150*/].f_26) && OBJECT::DOES_PICKUP_OBJECT_EXIST(Global_4718592.f_61833[iVar0 /*150*/].f_26))
      {
        if (bLocal_50394)
        {
          OBJECT::_0x858EC9FD25DE04AA(Global_4718592.f_61833[iVar0 /*150*/].f_26, 1);
          OBJECT::_0x8CFF648FBD7330F1(50);
        }
        else
        {
          OBJECT::_0x858EC9FD25DE04AA(Global_4718592.f_61833[iVar0 /*150*/].f_26, 0);
        }
        if (MISC::IS_BIT_SET(bLocal_14850, 24))
        {
          if (Global_4718592.f_61833[iVar0 /*150*/].f_23 == 1)
          {
            OBJECT::_0x858EC9FD25DE04AA(Global_4718592.f_61833[iVar0 /*150*/].f_26, 1);
            OBJECT::_0x8CFF648FBD7330F1(50);
          }
        }
      }
    }
    iVar0++;
  }
}