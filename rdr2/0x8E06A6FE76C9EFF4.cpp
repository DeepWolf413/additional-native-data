// beat_domestic_dispute.ysc @ L872
int func_22()
{
  switch (iLocal_305)
  {
    case 0:
      if (!func_101(func_99(&Local_17), func_100(&Local_17), &Local_228, &uLocal_309, 0, 0, -1, 1))
      {
        return 0;
      }
      iLocal_305 = 6;
      break;
    case 6:
      if (((func_32(uLocal_309[0], 0, 1) && func_32(uLocal_309[1], 0, 1)) && PED::_0xA0BC8FAED8CFEB3C(uLocal_309[0])) && PED::_0xA0BC8FAED8CFEB3C(uLocal_309[1]))
      {
        WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_309[0], true, true);
        func_103(uLocal_309[0], func_102(268435456, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
        func_104(uLocal_309[0], &Local_17, 0);
        PED::_0x13A210949FCBD92B(uLocal_309[0], 0);
        func_105(uLocal_309[0], 1);
        PED::_0xC6C4E15CF7D52FEA(uLocal_309[0], 20f);
        TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(uLocal_309[0], false);
        func_106(uLocal_309[0], 3);
        WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_309[1], true, true);
        func_104(uLocal_309[1], &Local_17, 0);
        func_105(uLocal_309[1], 1);
        PED::_0xC6C4E15CF7D52FEA(uLocal_309[1], 20f);
        TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(uLocal_309[1], false);
        func_106(uLocal_309[1], 3);
        return 1;
      }
  }
  return 0;
}